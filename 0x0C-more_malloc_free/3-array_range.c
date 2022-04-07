#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: Minimun value in the array
 * @max: Maximun value in the array
 * Return: a pointer
 */

int array_range(int min, int max)
{
	int s*;
	int n = 0;

	if (min > max)
	{
		return NULL;
	}
	else 
	{
		s = malloc(min + max);
		while (min <= max)
		{
			*(s + n) = min;
			n++;
			min++;
		}
		return (s);
	}
}
