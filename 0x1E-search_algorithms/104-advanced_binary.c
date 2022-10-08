#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Function that searches for a value in a sorted array of
 * integers using the binary search algorithm
 * @array: Pointer to the first element of an array to search in
 * @size: Numnber of elements in an array
 * @value: Value to search for
 * Return: value or -1 if value is not present or array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t m;
	size_t L = 0;
	size_t R = size - 1;

	if (!array)
		return (-1);

	while (L <= R)
	{
		advanced_print(array, L, R + 1);
		m = ceil((L + R) / 2);
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * advanced_print - Printing a sorted array of integers using the binary search
 * alorigthm
 * @array: The array to print from
 * @a: Beginning of the array
 * @b: End of the array to be printed
 * Return: No return
 */
void advanced_print(int *array, size_t a, size_t b)
{
	printf("Searching in array:");
	for (; a < b; )
	{
		printf(" %d", array[a]);
		a++;
		if (a < b)
			printf(",");
	}
	printf("\n");
}

