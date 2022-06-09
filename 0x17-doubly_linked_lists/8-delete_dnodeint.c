#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index of a
 * linked list
 * @head: Pointer to the pointer to the head of the list
 * @index: idex node that should be deleted.
 * Return: 1 if succeed -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *original;
	unsigned int e = 0;

	original = current = *head;

	while (current != NULL)
	{
		if (e == index)
		{
			if (e == 0)
			{
				current = current->next;
				free(original);
				*head = current;
			}
			else 
			{
				current = current->next;
				current->prev = original;
				original->next = current;
			}

			return (1);
		}
		original = current;
		current = current->next;
		e++;
	}
	return (-1);
}
