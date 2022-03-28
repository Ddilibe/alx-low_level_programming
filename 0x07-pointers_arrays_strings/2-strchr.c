#include "main.h"

/**
 * _strchr - function to locate a charater in a string
 * @s: string
 * @c: the character to find
 * Return: the address of the character
 */

char *_strchr(char *s, char c)
{
	int count = 0;
	int i = 0;

	do {
		count++;
	} 
	while (*(s + count) != '\0');

	for (i = 0; i < count; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
