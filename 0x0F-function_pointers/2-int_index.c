#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Array of elements input
 * @size: Size of array
 * @cmp: Function Pointer
 *
 * Return: An integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int r = 0;

	if (size <= 0)
	{
		return (-1);
	}

	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]) == 1)
		{
			return (r);
			break;
		}
	}
	return (-1);
}
