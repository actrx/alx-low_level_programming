#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

