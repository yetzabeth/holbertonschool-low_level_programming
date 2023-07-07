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
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	char *concat = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = strlen(s1);
	b = strlen(s2);
	concat = malloc(a + b + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];
	for (j = 0; s2[j]; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';
	return (concat);
}
