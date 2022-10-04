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
    int i;
    d = malloc(sizeof(str));
    if (d == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < sizeof(str); i++)
    {
        d[i] = str[i];
    }

    return (d);
}