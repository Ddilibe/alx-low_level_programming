#ifndef _DOG_
#define _DOG_

/**
 * struct dog - structure type is dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: This is for all the dogs out there
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog dog_t;

void print_dog(struct dog *d);
#endif
