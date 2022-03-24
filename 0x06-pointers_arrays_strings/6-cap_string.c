#include "main.h"
#include <stdio.h>
/**
 * cap_string - function that capitalize all the words in a string
 * @*c : input string
 * Return: return the string
 */

char *cap_string(char *c)
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
			if (*(c + (i - 1)) == ' ')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}
			if (*(c + (i - 1)) == ',')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}
			if (*(c + (i - 1)) == ';')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}
			if (*(c + (i - 1)) == '.')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}
			if (*(c + (i - 1)) == '!')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}
			if (*(c + (i - 1)) == '?')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}
			if (*(c + (i - 1)) == '"')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}
			if (*(c + (i - 1)) == '(')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}
			if (*(c + (i - 1)) == ')')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}
			if (*(c + (i - 1)) == '{')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}
			if (*(c + (i - 1)) == '}')
			{
				if (*(c + i) == *(q + j))
				{
					*(c + i) = *(r + j);
					break;
				}
			}

		}
	}
	return (c);
}
