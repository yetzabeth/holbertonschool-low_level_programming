#include "hash_tables.h"
#include <string.h>
/**
 * key_index - obtained index
 * @key: key
 * @size: size table
 * Return: size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int mod = 0, index = 0;

	if (size < 1)
		return (-1);

	mod = hash_djb2(key);
	index = mod % size;
	return (index);
}
