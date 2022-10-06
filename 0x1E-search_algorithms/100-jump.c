#include "search_algos.h"

/**
 * jump_search - Function that searches for a value in a sorted array of
 * integers using the jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in an array
 * @value: Value to search for
 * Return: Return Value or -1 if value is not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = 0;

	if (!array)
		return (-1);

	while (array[min(b, size)] < value)
	{
		a = b;
		b = b + round(sqrt(size));
		if (a >= size)
			break;
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	if (value > array[size - 1])
	{
		b = a;
		a = size - 1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);

	while (array[a] < value)
	{
		if (value > array[size - 1])
			break;
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = a + 1;
		if (a > size)
			break;
	}

	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	if (array[a] == value)
		return (a);
	else
		return (-1);
}

size_t min(size_t a, size_t b)
{
	return ((a > b) ? b : a);
}
