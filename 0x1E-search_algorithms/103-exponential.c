#include "search_algos.h"

/**
 * exponential_search - Function that searches for a value in a sorted
 * array of integers using the expontial search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in an array
 * @value: Value to search for
 * Return: Index of the value in the array or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, jame = 1;

	if (!array)
		return -1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		jame = bound;
		bound = bound * 2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			jame, bound < size ? bound : size - 1);

	return (binary_search_exponential(array, fmin(bound + 1, size),
				bound / 2, value));
}

/**
 * binary_search_exponential - Function that searches for a value in a 
 * sorted array of integers using the binary search algorithm
 * @array: Pointer to the first element of an array to search in
 * @size: Numnber of elements in an array
 * @limit: Low limit of the array
 * @value: Value to search for
 * Return: value or -1 if value is not present or array is NULL
 */

int binary_search_exponential(int *array, size_t size, size_t limit, int value)
{
	size_t m;
	size_t L = limit;
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
 * @array: The array to print from
 * @a: Beginning of the array
 * @b: End of the array to be printed
 * Return: No return
 */
void print_binary(int *array, size_t a, size_t b)
{
	size_t c = a;

	printf("Searching in array:");
	for (; c < b; )
	{
		printf(" %d", array[c]);
		c++;
		if (c < b)
			printf(",");
	}
	printf("\n");
}
