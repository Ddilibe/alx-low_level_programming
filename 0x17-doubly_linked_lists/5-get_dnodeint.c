#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of
 * the linked list
 * @head: Pointer to the head of the linked list
 * @index: Index of the needed node
 * Return: Address if succeed Null if fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int e = 0;

	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			if (e == index)
				break;
			if (e != index)
				e++;
			current = current->next;
		}
		if (current->next == NULL)
			return (NULL);
		return (current);
	}
	return (NULL);
}
