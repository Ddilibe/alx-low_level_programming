#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end
 * of a linked list
 * @head: Pointer to the pointer to the head of the linked list
 * @n: Value to be inputed into the linked list
 * Return: Address if succeed NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *past;

	past = malloc(sizeof(dlistint_t));
	if (past == NULL)
		return NULL;

	past->n = n;
	past->next = NULL;

	if (*head == NULL)
	{
		past->prev = NULL;
		*head = past;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = past;
		past->prev = current;
	}

	return (past);
}
