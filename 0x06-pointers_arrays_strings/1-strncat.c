#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int mon, i;

	for (mon = 0; dest[mon] != '\0'; mon++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[mon + i] = src[i];

	dest[mon + i] = '\0';

	return (dest);
}	
