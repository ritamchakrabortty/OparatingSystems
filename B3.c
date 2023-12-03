#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
void main()
{
  pid_t p;
  printf("Hello world!\n");
  p=fork();
  if(p==0)
  {
    printf("Child process id: %d\n",getpid());
    printf("Child process parent id:%d\n",getppid());
    exit(10);
  }
  else
  {
    int s;
    sleep(10);
    wait(&s);
    printf("Parent id:%d\n",getpid());
    printf("Parent parent id %d \n",getppid());
    printf("Child exit with value %d\n",WEXITSTATUS(s));
    exit(20);
  }
}
