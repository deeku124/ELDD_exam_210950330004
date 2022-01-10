#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include <unistd.h>



int main()
{
    int fd,result;
    char Kbuff[20];
    fd=open("/dev/cdevice",O_RDWR,0777);
    if(fd<0)
    {
        printf("error opening device driver\n");
        return (-1);
    }
    read(fd,Kbuff,sizeof(Kbuff));
    printf("data read from the kernel is :%s\n",Kbuff);
    close(fd);
}