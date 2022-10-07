#include "search_algos.h"
/**
 * interpolation_search - Function that searches for a value in
 * a sorted array of integers using interpolation search
 * @array: Pointer to the first elements of array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (!array)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low])
				&& (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	else
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%ld] is out of range\n", mid);
		return (-1);
	}
}
