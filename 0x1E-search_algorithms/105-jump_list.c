#include "search_algos.h"

/**
 * jump_list - Function that searches for a value in a sorted list
 * of integers using the jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 * Return: Pointer to the head of node where value is or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *new, *current, *present;
	size_t length, distance, range;

	if (!list)
		return (NULL);

	distance = 0;
	new = list;

	while (new->n < value)
	{
		current = new;
		length = distance;
		distance = distance + sqrt(size);
		present = list;
		range = 0;
		if (distance < size)
		{
			while (range < distance)
			{
				range++;
				present = present->next;
			}
			new = present;
			printf("Value checked at index [%ld] and [%d]\n",
					new->index, new->n);
			continue;
		}
		break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			length, distance >= size ? size - 1 : distance);

	return (conclusion_list(current, size, distance, value));
}

/**
 * conclusion_list - Function that concludes the jump function
 * @current: Pointer to a linked list
 * @size: First size of the linked list
 * @distance: Second size of the linked list
 * @value: Value to compare
 * Return: NUll or pointer to another header
 */
listint_t *conclusion_list(listint_t *current, size_t size,
		size_t distance, int value)
{

	while (current->index < (distance >= size ? size : distance))
	{
		printf("Value checked at index [%ld] = [%d]\n",
				current->index, current->n);
		if (current->next)
		{
			if (current->n == value)
				return (current);
			current = current->next;
			continue;
		}
		break;
	}
	return (NULL);
}
