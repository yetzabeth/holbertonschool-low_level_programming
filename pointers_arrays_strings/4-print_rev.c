include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s : string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0') /* calculates length of a string */
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
