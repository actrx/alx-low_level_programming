#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @size: is the size of the array
 * @array: is a pointer to the function you need to use
 * @action: funstion pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
