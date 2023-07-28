#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head of list
 * @str: pointer of a string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (last->next)
				last = last->next;
			last->next = new_node;
		}
	}
	else
		free(new_node);
	return (new_node);
}
