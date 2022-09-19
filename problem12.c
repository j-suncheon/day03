#include <stdio.h>

void main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		if (i<=5)
		{
			for (int j = 1; j <= 5; j++)
			{
				if (i<=j)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		else
		{
			for (int j = 1; j <= 5; j++)
			{
				if (j+i<=9)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			printf("\n");
		}
	}
}