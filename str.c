#include "stdio.h"

char swap(char *dest, char *src);
int main(void)
{
	char *fot = "This";
	char *git = "befiting";

	printf("This is the situation before switching\n");
	printf("fot : %s\ngit : %s\n", fot, git);
	swap(fot , git);
	printf("This is the situation after the swap\n");
	printf("fot : %s\ngit : %s\n", fot, git);
	return (0);
}
char swap(char *dest, char *src){
//	int count = 0, count2 = 0;
//
//	while (*(dest + count) != '\0')
//		count++;
//
//	while (count++ >= 0)
//	{
//		*(dest + count) = *(src + count2);
//		if (*(src + count2) == '\0')
//			break;
//		count++;
//		count2++;
//	}
	int a =-1, i;
	for (i = 0; dest[i] != '\0'; i++)
		;
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
