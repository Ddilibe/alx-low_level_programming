#include "lists.h"

/**
 * print_listint - print all the elements contained in the list
 * @h: List passed
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
