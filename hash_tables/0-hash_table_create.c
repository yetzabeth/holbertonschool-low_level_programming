#include "hash_tables.h"
/**
 * hash_table_create - create hash table by size
 * @size: size hash table
 * Return: new or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->array = malloc(size * sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
