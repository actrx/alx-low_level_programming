#include <stdio.h>

/**
 * file - print file
 *
 *
 */
void file(void)
{
	printf("%s\n", __BASE_FILE__);
}

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	file();
	return (0);
}
