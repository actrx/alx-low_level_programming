#include <stdio.h>
/**
 * swap_int - Swap int a and b
 * @a: Pointer 
 * @b: Pointer 
 * @x: Store value of pointer
 * @y: Store value of pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
    int x, y;
    x = *a;
    y = *b;
    *a = y;
    *b = x;
}
