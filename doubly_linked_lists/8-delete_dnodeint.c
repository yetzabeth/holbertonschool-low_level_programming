#include "lists.h"
/**
 * delete_dnodeint_at_index - Write a function that deletes
 * the node at index index of a dlistint_t linked list
 * @head: pointer to pointer to head double linked list
 * @index: position to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *delete = *head;

	if (*head)
	{
		for (i = 0; i < index && delete; i++)
			delete = delete->next;
		if (i == index)
		{
			if (i == 0)
				*head = (*head)->next;
			if (delete->prev)
				delete->prev->next = delete->next;
			if (delete->next)
				delete->next->prev = delete->prev;
			delete->prev = NULL;
			delete->next = NULL;
			free(delete);
			return (1);
		}
	}
	return (-1);
}
