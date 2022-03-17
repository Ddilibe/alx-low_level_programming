#include "main.h"
/** 
 * _isUpper - This function checks for uppercase charcter
 * if True,
 * Return: 1
 * else
 * Return: 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
