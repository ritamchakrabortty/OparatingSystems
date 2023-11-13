#include<stdio.h>
#include<unistd.h>
int main()
{
  int n;
  char b[30];
  n=read(0,b,30);
  write(1,b,n);
  //n=write(1,"Hello\n",6);
  //printf("value of n is %d\n",n);


}
