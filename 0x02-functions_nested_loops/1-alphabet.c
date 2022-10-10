#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet - Function to print the alphabet in lower case
 *
 * Return: No return
 */

void print_alphabet(void)
{
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
	       	'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
	       	'u', 'v', 'w', 'x', 'y', 'z'};
	char next = '\n';
	size_t h, g;

	h = 0;
	g = sizeof(alphabet) / sizeof(alphabet[0]);
	while (h < g)
	{
		_putchar(alphabet[h]);
		h++;
	}
	_putchar(next);
}
