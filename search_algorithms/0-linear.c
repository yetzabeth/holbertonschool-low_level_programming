#include "search_algos.h"

/**
 * linear_search - C function for performing a linear search in an array
 * @array: is a pointer to the beginning of the array to be searched.
 * @size: is the number of elements in the array.
 * @value: is the target value you want to find within the array.
 * Return: the index locate or -1 if is no present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
