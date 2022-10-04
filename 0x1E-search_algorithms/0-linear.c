#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of integers
 * using the linear search algorithms
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: the value if true else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	if (!array)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (array[j]);
	}
	return (-1);
}
