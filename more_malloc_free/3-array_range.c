#include "main.h"

/**
 * array_range - create an array of ints
 * @min: int
 * @max: int
 * Return: int
 */

int *array_range(int min, int max)
{
	int i, j = 0, *p;

	if (min > max)
		return (0);
	p = malloc(sizeof(int) * (max - min) + 4);
	if (p == NULL)
		return (0);
	for (i = min; i <= max; i++, j++)
		p[j] = i;
	return (p);
}
