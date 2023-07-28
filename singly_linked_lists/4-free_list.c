#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: head of list
 *  Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head))
	{
		if (tmp->str)
			free(head->str);
		head = head->next;
		free(tmp);
	}
}
