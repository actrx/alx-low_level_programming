#include <stdio.h>

/**
* main - program that multiplies two numbers.
*
* @argc: count
* @argv: vector
*
* Return: 1 or 0
*
*/


int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		puts(argv[i]);
	}
	return (0);
}

