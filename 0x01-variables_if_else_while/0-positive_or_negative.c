#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main-prints is number is positive, zero or negative
 * Return:Always(success)
 *
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
	{
		printf("%d is positve\n");
	}
	else if(n == 0)
	{
		printf("%d is zero\n");
	}
	else

	{
		printf("%d is negative\n");
	}
	return(0);
}
