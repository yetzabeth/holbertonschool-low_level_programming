#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string.
 *@s: is a pointer
 */

void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
