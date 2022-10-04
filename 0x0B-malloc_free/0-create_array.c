#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the char to print
 * @size: the size of the memory to print
 *
 * Return: NULL if size is 0, pointer ar.
 */
char *create_array(unsigned int size, char c)
{
    char *ar;
    int i;

    ar = malloc(size * sizeof(char));

    if (size == 0)
    {
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        ar[i] = c;
    }
    return (ar);
}