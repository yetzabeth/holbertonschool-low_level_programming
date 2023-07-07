#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - function returns a pointer to a new string which is a duplicate
 * of the string str.
 * @str: string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == (NULL))
		return (NULL);

	s = malloc(strlen(str) + 1);
	if (s == (NULL))
		return (NULL);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[i] = ('\0');
	return (s);
}
