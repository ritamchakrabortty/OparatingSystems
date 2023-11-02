//8.1 Write a program in C, which pauses until it receives a key like Ctrl+C when pressed with a suitable warning massage.

#include<stdio.h>
#include <signal.h>
#include <unistd.h>
void fun(int s)
{
	signal(SIGINT,fun);
	printf("You have typed ctrl+c ");
	fflush(stdout);

}
int main()
{

	printf("\n");
	printf("Main begins.\n");
	signal(SIGINT,fun);
	for(;;)
		pause();
	
}
