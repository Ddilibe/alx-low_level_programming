#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all data in the list
 * @head:  pointer to the head of the list
 * Return: 0 if empty sum if succeed
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int e = 0;

	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			e = e + current->n;
			current = current->next;
		}
	}
	return (e);
}
