#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints str in rev
 *
 * @str: pointer
 *
 *
 *
 *
 */
void print_rev(char *str)
{
	int y = strlen(str) - 1;

	while (y != -1)
		printf("%c", str[y--]);
}  

int main()
{
	char *str = "Hello, world.";
	print_rev(str);
	return (0);
}
