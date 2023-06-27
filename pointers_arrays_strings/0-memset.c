#include "main.h"
#include <string.h>
/**
 * *_memset - Write a function that fills memory with a constant byte.
 * @s: pointer
 * @b: character
 * @n: bytes number
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int x = n;

	for (i = 0; i < x; i++)
		s[i] = b;
	return (s);
}
