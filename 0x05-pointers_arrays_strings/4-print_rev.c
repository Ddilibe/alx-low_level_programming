#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: string to be inputed
 * Return: no return
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len; i >= 0; i--)
	{
		printf("%c",s[i]);
	}
	printf("\n");
}
