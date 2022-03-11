#include<stdio.h>
/**
 * main - Prints out the alphabets in lower case while excluding e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ap = 'a';

	while (ap <= 'z')
	{
		if ((ap == 'e') || (ap == 'q'))
		{
			ap++;
			continue;
		}
		else 
		{
			putchar(ap);
		}
		ap++;
	}
	putchar('\n');
	return (0);
}
