#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * @n : integer
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int last = 98;

	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}

	printf("%d\n", last);
}
