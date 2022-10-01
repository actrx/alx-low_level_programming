#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * @argc: the argument count
 * @argv: the arguments as string array
 *
 * Description: print positive integers
 *
 * Return: 0 (success), 1 (if no argument provided
 * or if a symbol which is not a digit found)
 */
int main(int argc, char *argv[])
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

