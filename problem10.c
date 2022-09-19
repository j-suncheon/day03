#include <stdio.h>

void main(void)
{
	/*for (int i = 1; i <= 9; i++)
	{
		if (i<=5)
		{
			for (int j = 0; j < i; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int j = 1; j <= 10-i; j++)
			{
				printf("*");
			}
		}

		printf("\n");
	}*/

	
	int star =1 ;

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= star; j++)
		{
			printf("*");
		}
		printf("\n");
		i < 5 ? star++ : star--;
	}

}