#include "main.h"
#include <stdio.h>
/**
 * leet - encode a string into 1337
 * @*r: Input a pointer
 * Return: returns the string
 */

char *leet(char *r)
{
	int i, count = 0;
	char *a = "4", *e = "3", *t = "7", *l = "1", *o = "0";
	char *f = "AETOLaetol";
	char *w = "43701";

	while (*(r + count) != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		for (int d = 0; d < 10; d++)
		{
			if (*(r + i) == *(f + d))
			       *(r + i) = *(w + (d % 5));
		}
	}		
	return (r);
}
