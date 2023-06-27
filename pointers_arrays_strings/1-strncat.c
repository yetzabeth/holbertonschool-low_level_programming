#include "main.h"
/**
 * *_strncat - Write a function that concatenates two strings.
 * @dest: Pointer
 * @src: Pointer
 * @n: Number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n && src[j]; j++)
		dest[i + j] = src[j];
	return (dest);
}
