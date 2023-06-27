#include "main.h"
/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: Pointer
 * @src: Pointer
 * @n: Bytes number
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int x = n;

	for (i = 0; i < x; i++)
		dest[i] = src[i];
	return (dest);
}
