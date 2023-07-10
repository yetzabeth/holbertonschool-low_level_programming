#include "main.h"
#include <stddef.h>
/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: Pointer
 * @c: Character
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p = s;

	for (i = 0; s[i] != c && s[i] ; i++)
		;
	if (s[i] == c)
	{
		p = s + i;
		return (p);
	}
	else
		return (NULL);
}
