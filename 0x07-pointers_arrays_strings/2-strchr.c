#include "main.h"
#include <stdio.h>
/**
 * _strchr - function to locate a charater in a string
 * @s: string
 * @c: the character to find
 * Return: the address of the character
 */

char *_strchr(char *s, char c)
{
	int count = 0;
	char *fo;
	int j = 0;
	int w = 0;

	do {
		count++;
	} 
	while (*(s + count) != '\0');

	for (int i = 0; i < count; i++)
	{
		if (*(s + i) == c)
			break;
		w++;
	}
	

	for (int i = w; i < count; i++)
	{
		*(fo + j) = *(s + i);
		j++;
	}
	*(fo + j) = '\0';
	
	return (fo);
}
