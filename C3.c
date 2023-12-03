#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
  pid_t p;
  printf("Hello world!\n");
  p=fork();
  if(p==0)
  {
    sleep(20);
    printf("Child process id: %d\n",getpid());
    printf("Child process parent id:%d\n",getppid());
    
  }
  else
  {
    printf("Parent id:%d\n",getpid());
    printf("Parent parent id %d \n",getppid());
    exit(10);
  }

}
