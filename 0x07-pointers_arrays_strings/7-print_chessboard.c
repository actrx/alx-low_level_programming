#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 * @a: pointer
 *
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		if (i == 7)
			continue;
		{
			_putchar('\n');
		}
	}
}
