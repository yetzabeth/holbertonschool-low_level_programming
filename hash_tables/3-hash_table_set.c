#include "hash_tables.h"
/**
 * hash_table_set - add o update key
 * @ht: hash table
 * @key: key
 * @value: value to key
 * Return: 0 fail or 1 sucess
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *aux = NULL;
	hash_node_t *new = NULL;
	char *valor = NULL;
	unsigned int index = 0;

	if (strlen(key) == 0 || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	aux = ht->array[index];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			valor = strdup(value);
			if (valor == NULL)
				return (0);
			free(aux->value);
			aux->value = valor;
			return (1);
		}
		aux = aux->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
