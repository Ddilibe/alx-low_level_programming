#include <stdio.h>

/**
 * before_main - function that runs before name
 *
 * Return: Nothing.
 */

void before_main() __attribute__((constructor));

void before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
