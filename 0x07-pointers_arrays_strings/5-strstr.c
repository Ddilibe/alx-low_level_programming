#include "main.h"
#include <stddef.h>

/**
 * _strstr - Function to find the first
 * occurance of a sub string in a major string
 * @haystack : major string
 * @needle: substring
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
/**	int d = 0;
 *	int g = 0;
 *	int k;
 *	int q = 0;
 *	char *zingo;
 *
 *	do {
 *		d++;
 *	}
 *	while (*(haystack + d) != '\0');
 *
 *	do {
 *		g++;
 *	}
 *	while (*(needle + g) != '\0');
 *
 *	for (k = 0; k < g; k++)
 *	{
 *		if (*(haystack + k) == *(needle + q))
 *		{
 *			*(zingo + q) = *(needle + q);  
 *			q++;
 *			if (q == g)
 *				break;
 *		}
 *		else
 *		{
 *     			q = 0;
 *		}
 *	}
 *	return (zingo);
 */
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
