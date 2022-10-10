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

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = _strdup(name);
	ptr->age = age;
	ptr->owner = _strdup(owner);
	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
