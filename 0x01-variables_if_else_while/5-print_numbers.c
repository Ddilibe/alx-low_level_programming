#include<stdio.h>
/**
 * main - Prints out all the single digits of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	do{
		printf("%d", num);
		num++;
	}while (num < 10);
	printf("\n");
	return (0);
}
