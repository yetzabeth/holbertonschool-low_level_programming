#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * @array : array of integers
 * @size : number of the elements in the array
 * @cmp : function to be used
 *
 * Return: index of the first element for which the cmp function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
