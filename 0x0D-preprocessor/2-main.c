#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function to print the name
 * of the file it was complied from
 *
 * Return: Always 0.
 */


int main(void)
{
	printf("%s", __FILE__ );
	return (0);
}
