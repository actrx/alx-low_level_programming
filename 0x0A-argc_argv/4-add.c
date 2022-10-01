#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i;
	int m = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			m += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", m);
	return (0);
}

