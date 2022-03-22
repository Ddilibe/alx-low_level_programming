#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the other half of the string
 * @str: input the string
 * Return: no return
 */

void puts_half(char *str)
{
	int t, y, u;

	t = strlen(str);
	y = t / 2;
	if (t % 2 == 0)
	{
		for (u = (y); u < t; u++)
		{
			printf("%c", str[u]);
		}
	}
	else
	{
		for (u = (y + 1); u < t; u++)
		{
			printf("%c", str[u]);
		}
	}
	printf("\n");
}
