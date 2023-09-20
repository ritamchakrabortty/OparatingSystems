//simple program for system call write()
#include<stdio.h>
#include<unistd.h>
int main()
{
  write(1,"Hello\n",6);
  return 0;
}
