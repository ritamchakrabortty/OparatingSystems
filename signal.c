#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <sys/wait.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>
int main()
{
  int pid = fork();
  if(pid == -1)
  {
    return 1;
  }
  
  if(pid == 0)
  {
    while(1)
    {
      printf("Some text goes here\n");
      usleep(50000); 
    }
  }
  else
  {
    sleep(1);
    kill(pid, SIGKILL);
    wait(NULL);
  }
  
}
