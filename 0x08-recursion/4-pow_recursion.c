#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int to power
 * @y:  power of x
 * Return: return int
 */

int _pow_recursion(int x, int y)
{
	if (x == 1)
		return (1);
	if (x == 0)
		return (0);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	y--;
	return (x * _pow_recursion(x, y));
}
