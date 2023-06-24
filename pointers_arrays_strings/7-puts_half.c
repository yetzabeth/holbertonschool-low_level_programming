#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i]; i++)
		;
	j = (i + 1) / 2; /*le suma 1 por si es impar, para tomar la segunda mitad*/

	for (; str[j]; j++)
		_putchar(str[j]);
	_putchar('\n');
}
