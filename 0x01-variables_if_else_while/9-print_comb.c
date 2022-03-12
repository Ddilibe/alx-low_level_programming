#include<stdio.h>
/**
 * main - Prints out all the single digits of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	do {
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	} while (num < 10);
	putchar('\n');
	return (0);
}
