#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include <unistd.h>
#include<asm/ioctl.h>
#include"control.h"
struct stats{
    int size;
   // char buff[];
    int r_w;
};
struct stats Tosend;
int size,r_w;
int fd,result;
int main()
{
fd=open("/dev/cdevice",O_RDWR,0777);
if(fd<0)
    {
        printf("error opening device driver\n");
        return (-1);
    }
    result=ioctl(fd,GETSTATS,&Tosend);
    /*if(result<0)
    {
        printf("ioctl error\n");
        return(-1);
    }*/
    //result=ioctl(fd,GETSTATS,&buff);
    //result=ioctl(fd,GETSTATS,&);
    //printf("the size of the kernel buffer is %d\n",Tosend.size);
    //printf("the data from the kernel buffer is %s\n",buff);
    printf("the last operation performed on the kernel buffer is %d\n",Tosend.r_w);
close(fd);
}