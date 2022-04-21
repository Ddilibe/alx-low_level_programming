#include "lists.h"

/**
 * add_node_end - functions that adds
 * a new node at the end of a list
 * @head: the first node of list
 * @str: string input
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node_end = (list_t *)malloc(sizeof(list_t));

        add_node_end->str = strdup(str);
        add_node_end->len = strlen(str);
	add_node_end->next = NULL;

	if (*head == NULL)
		*head = add_node_end;
	else
	{
		list_t *last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = add_node_end;
	}

	return (add_node_end);
}
