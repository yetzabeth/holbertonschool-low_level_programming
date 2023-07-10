#include "main.h"
#include <ctype.h>
/**
 * _isupper - this function check if it is uppercase
 * @c: the caracter to print
 * Return: 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
