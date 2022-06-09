#include "lists.h"

/**
 * free_dlistint - Function that frees a linked list
 * @head: pointed to the head of the linked list
 * Return: No return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while ((current = head) != NULL)
	{
		if (head->next == NULL)
		{
			free(head);
			break;
		}
		else
		{
			head = head->next;
			free(current);
		}
	}
}
