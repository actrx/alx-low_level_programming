#include <stdio.h>

/**
* print_array - prints n number of array
*
* @a: pointer array
* @n: int n
*
*
*/
void print_array(int *a, int n)
{
	int i;

	n -= 1;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("%d", a[n]);
}
