#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - function to reverse a string
 * @s: the string input
 * Return: No return
 */

void rev_string(char *s)
{
	int count = 0, i, j;
	char *str;

	i = strlen(s);
	
	char temy[i];

	for (j = 0; j < i; j++)
	{
		if (j == 0)
		{
			(temy[j]) = '\0';
		}
		else
		{
			temy[i - j] = s[j];
		}
	}
	printf("%c",temy);
}
