#include "lists.h"
#include "1-dlistint_len.c"
/**
 * *insert_dnodeint_at_index - Write a function that inserts a new node
 * at a given position.
 * @h: pointer to pointer head node doboble linked list
 * @idx: position
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp;

	if ((idx != 0 && *h == NULL) || idx > dlistint_len(*h))
		return (NULL);
	/* if the position is 0, make new node as head*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	/* make a temp node and traverse to the node previous to the idx*/
	else
	{
		temp = *h;
		for (i = 0; i < idx - 1; i++)
		{
			if (temp)
				temp = temp->next;
		}
	}
	/* allocate memomy and values to new_node */
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/* if the previous node is not null, adjust the links*/
	if (temp)
	{
		new_node->next = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
		if (new_node->next)
			new_node->next->prev = new_node;
	}
	return (new_node);
}
