/*C prg to read the contents from a existing file 
and write that content on the screen*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
  int n,fd,fd1;
  char buf[50];
  fd=open("test.txt", O_RDONLY);//file exists then it will open and return the value of fd.
  n=read(fd,buf,50);
  fd1=open("target",O_CREAT|O_WRONLY,0744);//file does not exists command for creat and open.
  write(fd1,buf,n);
}

