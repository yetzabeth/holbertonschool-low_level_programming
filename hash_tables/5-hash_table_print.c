#include "hash_tables.h"
/**
 * hash_table_print - print all table
 * @ht: hash tabñe
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int flag = 0;
	unsigned long int i = 0;
	const hash_node_t *aux;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", aux->key, aux->value);
				aux = aux->next;
				flag = 1;
			}
		}
	}
	printf("}\n");
}
