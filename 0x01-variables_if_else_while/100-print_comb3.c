#include<stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, u;

	u = 1;

	for (i = 0; i < 9; i++)
	{
		for (j = u; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		u++;
	}
	return (0);
}
