#include <stdio.h>

void main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5-i; j >0; j--)
		{
			printf(" ");
		}

		for (int j = 1; j < 2*i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}