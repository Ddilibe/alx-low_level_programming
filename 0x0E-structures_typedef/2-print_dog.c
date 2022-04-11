#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#define NIL "(nil)"

/**
 * print_dog - Prints a struct dog
 * @d: The struct dog
 *
 * Return: no return
 */

void print_dog(struct dog *d)
{	
	float g;
	if (d == NULL)
	{
	}
	else
	{
		printf("Name: %s\n", d->name == NULL ? NIL : d->name );
		if (d->age == g )
			printf("Age: %s\n", NIL);
		else
			 printf("Age: %f\n", d->age );
		printf("Owner: %s", d->owner == NULL ? NIL : d->owner );
	}
}
