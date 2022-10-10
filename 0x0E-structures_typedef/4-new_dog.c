#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);

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
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

/**
 * _strdup - check the code for ALX School students.
 *
 * @str: string duplicated
 * Return: d and NULL if str is NULL.
 */
char *_strdup(char *str)
{
	char *d;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (*(str + len++))
		;
	d = malloc(len * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*(str + i))
	{
		d[i] = str[i];
		i++;
	}

	d[i] = '\0';
	return (d);
}
