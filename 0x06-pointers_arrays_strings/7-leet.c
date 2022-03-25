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
	
	while (*(r + count) != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		if ((r[i]) == ('a'))
		{
			*(r + i) = *a;
		}
		else if (*(r + i) == ('A'))
		{
			*(r + i) = *a;
		}
		else if (*(r + i) == ('e'))
		{
			*(r + i) = *e;
		}
		else if (*(r + i) == ('E'))
		{
			*(r + i) = *e;
		}
		else if (*(r + i) == ('t'))
		{
			*(r + i) = *t;
		}
		else if (*(r + i) == ('T'))
		{
			*(r + i) = *t;
		}
		else if (*(r + i) == ('o'))
		{
			*(r + i) = *o;
		}
		else if (*(r + i) == ('O'))
		{
			*(r + i) = *o;
		}
		else if (*(r + i) == ('l'))
		{
			*(r + i) = *l;
		}
		else if (*(r + i) == ('L'))
		{
			*(r + i) = *l;
		}
		else
		{
			continue;
		}
	}
	return (r);
}
