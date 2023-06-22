#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of two integers.
 *@a : integer
 *@b : integer
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
