#include "lists.h"
/**
 * dlistint_len - Write a function that returns the number
 * of elements in a linked dlistint_t list
 * @h: pointer to head node
 * Return: number of element in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
