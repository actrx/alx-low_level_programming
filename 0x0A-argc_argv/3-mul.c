#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiplies two numbers.
*
* @argc: count
* @argv: vector
*
* Return: 1 or 0
*/

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int m;

		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

