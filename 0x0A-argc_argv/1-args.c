#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: Always 0.
 */

int main (int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	if (argc < 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
