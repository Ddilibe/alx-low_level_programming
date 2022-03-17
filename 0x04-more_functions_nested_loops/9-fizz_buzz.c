#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print fizz for multiples of 3
 * print buzz for multiples of 5
 * then fizzbuzz for multiples of 5 and 3
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else 
		{
			printf("%d ", i);
		}
	}
	return (0);
}
