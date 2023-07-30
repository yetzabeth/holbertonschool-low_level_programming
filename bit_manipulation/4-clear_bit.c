#include "main.h"
/**
 * clear_bit - set the value of bit to 0
 * @n: decimal
 * @index: index
 * Return: -1 error or 1 success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 33)
		return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}
