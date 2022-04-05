#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that returns a pointer to a
 * newly allocated space in memory which containsa copy
 * of the string given as parameter
 * @str: string given as parameter
 * Return: Return a pointer
 */

char *_strdup(char *str)
{
	char *mon;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else {
		mon = malloc(strlen(str) * sizeof(char));
		while (1)
		{
			if (*(str + j) == '\0')
			{
				*(mon + j) = '\0';
				break;
			}
			else
			{
				*(mon + j) = *(str + j);
			}
			j++;
		}
		return (mon);
	}
}
