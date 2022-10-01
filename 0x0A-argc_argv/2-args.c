#include <stdio.h>

int main2(int argc, char **argv) {
	int i = 0;

	for (i=0; i < argc; i++)
	{
		puts(argv[i]);
	}
	return 0;
}
