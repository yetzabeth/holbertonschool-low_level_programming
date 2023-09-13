#include "search_algos.h"

/**
 * binary_search - performs a binary search on an integer array.
 * @array: A pointer to an array of integers on which to search
 * @size: The size of the array
 * @value: The value searched for in the array
 * Return: the index of the target value if found or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i;
	while (left <= right)
	{
		int middle = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[middle] == value)
		{
			return (middle);
		}

		if (array[middle] > value)
		{
			right = middle - 1;
		}

		else
		{
			left = middle + 1;
		}
	}
	return (-1);
}
