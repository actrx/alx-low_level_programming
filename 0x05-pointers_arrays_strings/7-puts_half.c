#include <stdio.h>
#include <string.h>

/**
 * puts_half -  print the second half of the string
 * @str: pointer 
 * 
 */
void puts_half(char *str)
{
	int len;
	int n;

	len = strlen(str);
	n = (len - 1) / 2;
	while (n < len)
	{
		n++;
		putchar(str[n]);
	}
}

int main(void)
{
	char *str;
	str = "0123456789";
	puts_half(str);
	return (0);
}
