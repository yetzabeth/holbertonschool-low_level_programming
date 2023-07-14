#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Write a function that returns the
 * sum of all its parameters.
 * @n: number of int
 * Return: add
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	unsigned int value;
	va_list par;

	va_start(par, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		value = va_arg(par, int);
		sum += value;
	}
	va_end(par);
	return (sum);
}
