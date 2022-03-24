#include<stdio.h>
/**
 * main - Determine all possible combinations of three digit numbers without repetition
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i,j,k,w,r,l;

	w = 1;

	r = 2;

	for  (i = 0; i < 8; i++)
	{
		for (j = w; j < 9; j++)
		{
			for (k = r; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if  (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			r++;
		}
		w++;
	}
	putchar('\n');
	return (0);
}
