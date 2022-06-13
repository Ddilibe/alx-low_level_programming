#include "main.h"
/**
 * _isdigit - checks whether the digit is in 0 through 9.
 * @c: input character.
 * Return: 1 if is a digit, 0 in other case.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
