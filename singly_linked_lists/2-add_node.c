#include "lists.h"
/**
 * *add_node - Write a function that adds a new node at the beginning
 * @head: pointer
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
	}
	else
		free(new_node);
	return (new_node);
}

