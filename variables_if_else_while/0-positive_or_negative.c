#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main is a function
 * Return: is 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n > 0)
	{
		printf("%d is positivo\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}