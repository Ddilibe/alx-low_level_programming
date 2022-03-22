#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements od an array of
 * integers followed by a new line
 * @a: input array
 * @n: Number of elements in an array
 * Return: no return
 */

void print_array(int *a, int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
		if (h < (n - 1))
		{
			printf("%d, ", a[h]);
		}
		else 
		{
			printf("%d\n", a[h]);
		}
	}
}
