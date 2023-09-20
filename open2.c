/*writting actually appending user input content in an 
exsisting file */
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
  int n,fd;
  char buf[150];
  n=read(0,buf,150);
  fd = open("target",O_WRONLY|O_APPEND);
  write(fd,buf,n);
}
