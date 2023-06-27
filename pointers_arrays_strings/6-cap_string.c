#include "main.h"
/**
 * *cap_string - Write a function that capitalizes all words of a string.
 * @a: Pointer
 * Return: Always 0
 */
char *cap_string(char *a)
{
	int i = 0;

	if (a[i] >= 97 && a[i] <= 122)
		a[i] = a[i] - 32;

	for (; a[i]; i++)
	{
		if (a[i] == 9 || a[i] == 10 || a[i] == 32 || a[i] == 44
				|| a[i] == 59 || a[i] == 46 || a[i] == 40
				|| a[i] == 41 || a[i] == 34 || a[i] == 63
				|| a[i] == 33 || a[i] == 123 || a[i] == 125)
		{
			if (a[i + 1] > 96 && a[i + 1] < 123)
				a[i + 1] = a[i + 1] - 32;
		}
	}
	return (a);
}
