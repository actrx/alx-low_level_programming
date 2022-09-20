#include <stdio.h>
#include <string.h>

/**
 * puts2 - reverse string
 * @s: pointer
 *
 *
 *
 */
void puts2(char *s)
{
	int i;
	int j;
	j = strlen(s);
	for (i=0;  i < j; i += 2)
	{
		putchar(s[i]);
	}

}

int main(void)
{
	char *str;

	str = "0123456789";
	puts2(str);
	return (0);
}
