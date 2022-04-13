#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Name input
 * @f: function pointer
 * @d: variable of the function pointer
 *
 * Return: no return.
 */

void print_name(char *name, void (*f)(char *d))
{
	f(name);
}
