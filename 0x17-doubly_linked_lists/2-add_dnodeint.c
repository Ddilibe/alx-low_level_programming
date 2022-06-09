#include "lists.h"

/**
 * add_dnodeint - A function that adds a node at the
 * beginning of the linked list
 * @head: Pointer to the pointer to the head of the linked list
 * @n: Value to be inputed in the linked list
 * Return: Address if succeed NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current, *future;
	
	future = malloc(sizeof(dlistint_t));

	if (future == NULL)
		return NULL;

	future->prev = NULL;
	future->n = n;
	
	if (*head == NULL)
	{
		future->next = NULL;
		*head = future;
	}
	else 
	{
		current = *head;
		while (current->prev != NULL)
			current = current->prev;
		current->prev = future;
		future->next = current;
		*head = future;
	}
	return (future);
}
