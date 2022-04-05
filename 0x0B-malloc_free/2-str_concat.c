#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: the first string
 * @s2: the second string
 * Return: Returns the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int m = 0, n = 0, b = 0;
	char *mon;

	if ((s1 == NULL) || (s2 == NULL))
	{
		return NULL;
	}
	else
	{
		mon = malloc((strlen(s1) + strlen(s2)) * sizeof(char));
	       while (1)
	       {
		       if (*(s1 + n) == '\0')
		       {
			       break;
		       }
		       else
		       {
			       *(mon + b) = *(s1 + n);
		       }
		       b++;
		       n++;
	       }
	       while (1)
	       {
		       if (*(s2 + m) == '\0')
		       {
			       *(mon + b) = '\0';
			       break;
		       }
		       else
		       {
			       *(mon + b) = *(s2 + m);
		       }
		       m++;
		       b++;
	       }
	       return (mon);
	}
}	
