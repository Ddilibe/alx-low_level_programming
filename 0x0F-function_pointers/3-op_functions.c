#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: an integer.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: an integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: an integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides an integer by another
 * @a: first integer
 * @b: second integer
 *
 * Return: an integer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the remainder after
 * dividing an integer by another
 * @a: first integer
 * @b: second integer
 *
 * Return: an integer
 */

int op_mod(int a, int b)
{
	return (a % b);
}
