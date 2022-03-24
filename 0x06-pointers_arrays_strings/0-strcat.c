#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int mon = 0, i = 0, k;

	do {
		mon++;
	}
	while (*(dest + mon) != '\0');
	
	while (*(src + i) != '\0')
	{
		i++;
	}
	i++;

	for (k = 0; k <= i; k++)
	{
		if (k == i){
			*(dest + mon) = '\0';
			break;
		}
		else
		{
			*(dest + mon) = *(src + k);
			mon++;
		}
	}		

	return (dest);
}	
