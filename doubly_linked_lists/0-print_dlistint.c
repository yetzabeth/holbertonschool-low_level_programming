#include "lists.h"
/**
* print_dlistint - Write a function that prints all the
* elements of a dlistint_t list
* @h: head of nodes
* Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
