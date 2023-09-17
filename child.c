//C program to create child process with fork() function
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
	pid_t p;
	
	printf("Hello World!\n");
	p=fork();
	
	if(p == 0)
	{
		printf("Child process id : %d\n",getpid());
		printf("Child process parent id: %d\n",getppid());
	}
	else
	{
		printf("Parent process id: %d\n",getpid());
		printf("Parent process parent id: %d\n",getppid());
	}
}
