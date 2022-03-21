#include "main.h"
#include <string.h>
/**
 * _strlen - Function to find the length of a string
 * @s: string input
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	char &mon[] = *s;

	return (strlen(&mon));
}

