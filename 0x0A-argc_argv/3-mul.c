#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program tha multiplies two numbers
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, k = 1, j;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]);
			k = k * j;
		}
		printf("%d\n", k);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
