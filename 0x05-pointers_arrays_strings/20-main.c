#include <stdio.h>
/**
 * main - pointers arithemetic
 *
 * Return: Always 0
 */

int main(void)
{
	int *p;
	int a[2];
	int n;

	p = &n;
	printf("p = &n;\np: %p\n", p);
	printf("p + 1: %p\n", p + 1);
	printf("p + 2: %p\n", p + 2);
	printf("p + 10: %p\n", p + 10);

	p = a;

	printf("\nThis is the part to check something\n\n");

	printf("p = a;\np: %p\np + 1: %p\n", p, p + 1);
}
