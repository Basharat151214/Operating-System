#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main()
{
	int pid= fork();

	if ( pid == 0)
	{
		fork();
		fork();
		printf("Hello");
	}
	else
	{
		fork();
		printf("Hello");
	}
	return 0;
}
