#include "main.h"
/**
 * _strcmp - Write a function that compares two strings.
 * @s1: pointer
 * @s2: pointer
 * Return: if are equal 0, negative value if s1 is less than s2,
 * potisiuve value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i]; i++)
		;
	if (s1[i] < s2[i])
		return (s1[i] - s2[i]);
	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
