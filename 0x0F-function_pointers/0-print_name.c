#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name
 * @fun: func pointer
 */
void print_name(char *name, void (*fun)(char *))
{
	fun(name);
}

