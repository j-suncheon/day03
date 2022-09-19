#include <stdio.h>

void main(void)
{

	int a = 1;

	for (int i = 1; i <= 9; i++)
	{
		if (i<=5)
		{
			for (int j = 1; j <=i-1 ; j++)
			{
				printf(" ");
			}
			for (int j = 1; j <= 11-2*i; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int j = 1; j < 10-i; j++)
			{
				printf(" ");
			}
			for (int j = 1; j <= 2*(i-5)+1; j++)
			{
				printf("*");
			}
		}

		printf("\n");
	}
}