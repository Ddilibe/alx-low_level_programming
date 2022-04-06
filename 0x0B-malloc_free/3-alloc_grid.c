#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2-dimensional array
 * @width: width of array
 * @height: height of array
 * Return: returns NULL or a pointer
 */

int **alloc_grid(int width, int height)
{
	int **mon;
	int f, g;

	mon = malloc(width  * sizeof(int *));
	for (f = 0; f < width; f++)
	{
		mon[f] = malloc(height * sizeof(int));
	}
	for (f = 0; f < width; f++)
	{
		for (g = 0; g < height; g++)
		{
			mon[f][g] = 0;	
		}
	}
	return (mon);
}
