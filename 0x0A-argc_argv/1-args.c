#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the 
 * number of arguments passed into it.
 *
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
