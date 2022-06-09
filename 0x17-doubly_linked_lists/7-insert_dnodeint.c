#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the pointer to the head of a list
 * @idx: Index to where the new node is to be added
 * @n: Value to be inputed in the list
 * Return: NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *original;
	dlistint_t *new_node;
	unsigned int e = 0;
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	original = current = *h;
	while (current != NULL)
	{
		if (e == idx)
		{
			new_node->prev = original;
			new_node->next = current;
			original->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		original = current;
		current = current->next;
		e++;
	}
	return (NULL);
}
