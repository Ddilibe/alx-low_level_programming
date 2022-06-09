#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements in a linked list
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int w = 0;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		w++;
	}
	return (w);
}
