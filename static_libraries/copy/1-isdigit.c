#include "main.h"
#include <ctype.h>
/**
 * _isdigit - This function check if a digit
 * @c: The caracter to print
 * Return: 1 if it is c digit and 0 if it is otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
