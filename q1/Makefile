##ifneq
	obj-m := driver.o
##elseif
	KDIR= /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules
	gcc -o usr_ioctl usr_ioctl.c
	gcc -o uswrt uswrt.c
	gcc -o usread usread.c

clean:
	make -C $(KDIR) M=$(PWD) clean
	rm usr_ioctl
	rm usread
	rm uswrt