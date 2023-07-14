#include "variadic_functions.h"
/**
 * print_numbers - Write a function that prints numbers,
 * followed by a new line.
 * @separator: pointer
 * @n: number of variables
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list par;

	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(par, int);
		if (separator != NULL)
		{
			printf("%d", num);
			if (i < n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", num);
	}
	printf("\n");
	va_end(par);
}
