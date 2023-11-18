#include <stdio.h>

void print_binary(unsigned long int n)
{
	int size = sizeof(int) * 8;
	int i;

	for (i = size - 1; i >= 0; i--)
	{
		int bit = (n >> i) & 1;
		
		printf("%d", bit);
	}
	printf("\n");
}
