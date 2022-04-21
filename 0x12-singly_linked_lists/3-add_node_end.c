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
	while (*head != NULL)
	{
		head = head->next;
	}

 	list_t *add_node_end = (list_t *)malloc(sizeof(list_t));

        add_node_end->str = strdup(str);
        add_node_end->len = strlen(str);
	
	*(head->next) = *add_node_end;
	add_node_end->next = NULL;

	return (add_node_end);
}
