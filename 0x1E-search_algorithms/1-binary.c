#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted array of
 * integers using the binary search algorithm
 * @array: Pointer to the first element of an array to search in
 * @size: Numnber of elements in an array
 * @value: Value to search for
 * Return: value or -1 if value is not present or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m;
	size_t L = 0;
	size_t R = size - 1;

	if (!array)
		return (-1);

	while (L <= R)
	{
		print_binary(array, L, R + 1);
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
 * print_binary - Printing a sorted array of integers using the binary search
 * alorigthm
 * @a: Beginning of the array
 * @b: End of the array to be printed
 * Return: No return
 */
void print_binary(int *array, size_t a, size_t b)
{
	printf("Searching in array:");
	for (; a < b; )
	{
		printf(" %d", array[a]);
		a++;
		if ((a < b))
			printf(",");
	}
	printf("\n");
}

