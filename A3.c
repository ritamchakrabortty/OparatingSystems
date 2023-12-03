#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
int main()
{
  int id = fork();
  if(id == 0)
  {
    sleep(1);
  }
  printf("Current id: %d, parent Id: %d\n",getpid(),getppid());
  return 0;
}
