#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an arrays of chars
 * and initializes it with a specific char
 * @c: An array of chars
 * @size: size of char
 * Return: Returns a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *pont;
	unsigned int j = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		pont = malloc( c * sizeof(unsigned int));
		while (j < size)
		{
			*(pont + j) = c;
			j++;
		}
		return (pont);
	}
}
