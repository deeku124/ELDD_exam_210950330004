#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include <unistd.h>

int main()
{
    int fd,result;
    char Ubuff[20]="abc";
    //struct Defaultdata Tosend={115200,1,0};
    fd=open("/dev/cdevice",O_RDWR,0777);
    if(fd<0)
    {
        printf("error opening device driver\n");
        return (-1);
    }
    write(fd,Ubuff,sizeof(Ubuff));
    close(fd);
}