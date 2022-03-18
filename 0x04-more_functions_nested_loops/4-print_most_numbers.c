#include "main.h"

/**
 * print_most_numbers - Prints all the numbers from 0 to 9
 * with  the exceptionn of 2 and 4
 * Return: No return.
 */

void print_most_numbers(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		if ((j == 50) || (j == 52))
		{
			continue;
		}
		else
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
