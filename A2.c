#include<stdio.h>
#include<unistd.h> //->for fork() system call
int main()
{
  int id = fork();
  if(id !=0 )
  {
    fork();
  }
  printf("Hello world!\n");
 // printf("Hello world from id %d\n",id);
  //if(id == 0)
  //{
    //printf("Hello from child process\n");
  //}
  //else
  //{
    //printf("Hello from the main process\n");
  //}
  //for(int i=1;i<=4;i++)
  //{
    //fork();
    //printf("Hello world!\n");
  //}
  return 0;
}

