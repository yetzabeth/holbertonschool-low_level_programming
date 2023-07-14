#include "variadic_functions.h"
/**
 * print_strings - Write a function that prints strings,
 * followed by a new line.
 * @separator: pointer
 * @n: number of variables
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list par;

	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(par, char *);

		if (separator != NULL)
		{
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
			if (i < n - 1)
				printf("%s", separator);
		}
		else
			printf("%s", s);

	}
	printf("\n");
	va_end(par);
}
