#include <stdio.h>

void main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		if (i<=5)
		{
			for (int j = 1; j <= 6-i; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int j = 1; j <= i-4; j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}