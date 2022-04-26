#include "lists.h"

/**
 * add_nodeint - function to add a new node
 * at the beginning of the list
 * @head: the first element of the list
 * @n: value from the structure
 * Return: the address of the new list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_nodeint = (listint_t *)malloc(sizeof(listint_t));

	add_nodeint->n = n;
	add_nodeint->next = *head;

	*head = add_nodeint;

	return (*head);
}
