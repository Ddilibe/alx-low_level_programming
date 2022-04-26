#include "lists.h"

/**
 * add_nodeint_end - function to add a
 * new node at the of the list
 * @head: First element of the linked list
 * @n: the integer value of n
 * Return: The address of the new element;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_nodeint_end = (listint_t *) malloc(sizeof(listint_t));

	add_nodeint_end->n = n;
	add_nodeint_end->next = NULL;

	if (*head == NULL)
	{
		*head = add_nodeint_end;
		return (*head);
	}
	else
	{
		listint_t *last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = add_nodeint_end;
		return (last_node);
	}
	return (NULL);
}
