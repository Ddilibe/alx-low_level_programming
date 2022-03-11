#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Prints the last digit of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,w;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	w = n % 10;
	if (w > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n,w);
	if (w == 0)
		printf("Last digit of %d is %d and is 0\n", n,w);
	if ((w >= 0) && (w < 6))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,w);
	return (0);
}
