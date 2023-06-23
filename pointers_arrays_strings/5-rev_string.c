#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: is a string
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[j] != '\0')
	{
		j++;
	}

	j--;

	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

		i++;
		j--;
	}
}
