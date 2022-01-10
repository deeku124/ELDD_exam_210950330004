##ifneq
	obj-m := driver.o
##elseif
	KDIR= /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules
	gcc -o user user.c

clean:
	make -C $(KDIR) M=$(PWD) clean
	rm user