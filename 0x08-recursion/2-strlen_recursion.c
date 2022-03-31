#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Function that return
 * the length of a string
 * @s: the string
 * Return: a number
 */


int _strlen_recursion(char *s)
{

	if (*(s + 1) != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (1);
	}
}
