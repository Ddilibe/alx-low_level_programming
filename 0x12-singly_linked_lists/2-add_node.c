#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list
 * @head: first Node of the linked list
 * @str: string argument
 * Return: The address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node = (list_t *)malloc(sizeof(list_t));

	add_node->str = strdup(str);
	add_node->len = strlen(str);

	add_node->next = *head;

	*head = add_node;

	return (*head);
}
