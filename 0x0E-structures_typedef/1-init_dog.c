#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @d: pointer to struct dog
 * @name: pointer to name
 * @owner: pointer to char
 * @age: pointer to int
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
