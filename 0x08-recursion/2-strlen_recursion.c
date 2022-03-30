#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Function that return 
 * the length of a string
 * @s: the string
 * Return: a number
 */

int e = 0;

int _strlen_recursion(char *s)
{

	if (*(s + 1) != '\0')
	{
		_strlen_recursion(s + 1);
		e = e + 1;
	}
	else
	{
		e = e + 1;
	}
	return (e);
}
