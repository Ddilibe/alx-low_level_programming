#include<stdio.h>
/**
 * main - Prints out the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ap = 'a';

	while (ap <= 'z')
	{
		putchar(ap);
		ap++;
	}
	putchar('\n');
	return (0);
}
