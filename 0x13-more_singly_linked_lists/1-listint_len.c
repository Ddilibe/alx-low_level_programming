#include "lists.h"

/**
 * listint_len - function to read the
 * number of elements in a linked list
 * @h: The first element of the linked list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
