#include "lists.h"

/**
 * print_list - Function that prints all
 * the elements of a list_t list
 * @h: node of the list entered
 *
 * Return: the numbers of nodes
 */

size_t print_list(const list_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
