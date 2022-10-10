#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * dog_t *new_dog - check the code
 * @name: pointer to name
 * @owner: pointer to char
 * @age: pointer to int
 *
 * Return: ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
