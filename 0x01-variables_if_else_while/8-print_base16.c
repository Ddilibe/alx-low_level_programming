#include<stdio.h>
/**
 * main - Prints out all the single digits of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	char ap = 'a';

	do {
		putchar(num + '0');
		num++;
	} while (num < 10);
	while (ap <= 'f')
	{
		putchar(ap);
		ap++;
	}
	putchar('\n');
	return (0);
}
