#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of charsa
 * @size: unsigned int
 * @c: char
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size);
	if (array == (NULL))
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
