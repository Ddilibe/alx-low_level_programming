#include<stdio.h>
/**
 * main - Prints out the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ap = 'z';

	while (ap >= 'a')
	{
		putchar(ap);
		ap--;
	}
	putchar('\n');
	return (0);
}
