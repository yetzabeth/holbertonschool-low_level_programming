#include "lists.h"
/**
 * get_dnodeint_at_index - Write a function that returns the nth
 * node of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: index to search in the list
 * Return: the nth or null if the node no exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (temp && count != index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
