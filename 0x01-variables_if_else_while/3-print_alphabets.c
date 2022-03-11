#include<stdio.h>
/**
 * main - Prints out the alphabets in lower casse and then in uppercase
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

	char AP = 'A';

	while (AP <= 'Z')
	{
		putchar(AP);
		AP++;
	}
	putchar('\n');
	return (0);
}
