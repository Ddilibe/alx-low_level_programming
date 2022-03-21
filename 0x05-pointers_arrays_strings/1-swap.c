#include "main.h"
/**
 * swap_int - Function that swap the value of two integer
 * @a: first integer
 * @b: second integer
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int w,v;
	
	w = *a;

	v = *b;

	*a = v;

	*b = w;
}


