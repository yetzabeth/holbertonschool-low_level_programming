#include "main.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: Pointer
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (j = 0; accept[j]; j++)
	{
		for (i = 0; s[i]; i++)
		{

			if (s[i] == accept[j])
				count++;
			if (s[i] == ',')
				break;
		}
	}
	return (count);
}
