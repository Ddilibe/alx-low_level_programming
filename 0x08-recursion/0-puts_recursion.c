#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Function to print a string followed
 * by a new line
 * @s: the string
 * Return: No return
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
