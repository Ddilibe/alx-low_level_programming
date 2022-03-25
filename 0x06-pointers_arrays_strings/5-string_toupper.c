#include "main.h"
#include <stdio.h>
/**
 * string_toupper - function that changes all the lowercase
 * letters of a string to uppercase
 * @*c : input string
 * Return: return the string
 */

char *string_toupper(char *c)
{
	char *r = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *q = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;

	do {
		count++; 
	}
	while (*(c + count) != '\0');

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (*(c + i) == *(q + j))
			{
				*(c + i) = *(r + j);
				break;
			}
		}
	}
	return (c);
}
