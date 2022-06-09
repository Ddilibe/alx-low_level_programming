#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in a
 * linked list
 * @h: Pointer to the head of the linked list
 * Return: No of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int w = 0;

	current = h;
	while (current != NULL)
	{
		current = current->next;
		w++;
	}
	return (w);
}
