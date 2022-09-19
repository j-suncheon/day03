#include <stdio.h>

void main(void)
{
	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j >= 1; j--)
		{
			if (j > i)
			{
				printf("-");

			}
			else
			{
				printf("*");
			}
		}

		printf("\n");
	}*/

	for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j <= 5-i; j++)
		{
			printf(" ");
		}
		for (int j =0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}