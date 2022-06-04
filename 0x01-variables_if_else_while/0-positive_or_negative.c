#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -I am gonna print a random number and state whether
 *it is a positive number or negative or zero
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} 
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);

	return (0);
}
