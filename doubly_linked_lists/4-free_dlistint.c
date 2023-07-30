#include "lists.h"
/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: pointer to head node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
