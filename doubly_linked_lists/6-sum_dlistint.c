#include "lists.h"
/**
 * sum_dlistint - Write a function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: pointer to head node
 * Return: sum of data(n) of nodes or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
