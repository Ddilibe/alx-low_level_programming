#include "lists.h"

/**
 * list_len - A function that returns the
 * number of elements in a linked list_t list
 * @h: First Node of the linked list
 * Return: Number of elements in a list
 */

size_t list_len(const list_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
