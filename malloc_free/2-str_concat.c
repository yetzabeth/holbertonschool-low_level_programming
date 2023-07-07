#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - Write a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, a, b;
	char *strc;

	if (s1 == (NULL))
		return ("");
	if (s2 == (NULL))
		return ("");

	a = strlen(s1);
	b = strlen(s2);
	strc = malloc((a + b) + 1);
	if (strc == (NULL))
		return (NULL);
	for (i = 0; s1[i]; i++)
		strc[i] = s1[i];
	for (j = 0; s2[j]; j++)
		strc[i + j] = s2[j];
	strc[i + j] = '\0';
	return (strc);
}
