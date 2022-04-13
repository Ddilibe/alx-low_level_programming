#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function 
 * given as a parameter on each element of an array
 * @array: input array
 * @size: size of the array
 * @action: pointer function
 *
 * Return: No return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int f = 0;
	
	for (f = 0; f < size; f++)
	{
		action(array[f]);
	}
}
