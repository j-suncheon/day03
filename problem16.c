#include <stdio.h>

void main(void)
{
	/*int num = 1;
	int num2 = 1;
	
	for (int i = 1; i <= 9; i++)
	{
		if (i<5)
		{
			for (int j = 1; j <= num; j++)
			{
				printf("*");
			}
			for (int j = 1; j <= 9-2*i; j++)
			{
				printf(" ");
			}
			for (int j = 1; j <= num; j++)
			{
				printf("*");
			}
			num += 1;
		}
		else if (i==5)
		{
			for (int j = 1; j <=9 ; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int j = 1; j <=5-num2 ; j++)
			{
				printf("*");
			}
			for (int j = 1; j <= 2*num2-1 ; j++)
			{
				printf(" ");
			}
			for (int j = 1; j <= 5-num2; j++)
			{
				printf("*");
			}
			num2 += 1;

		}
		printf("\n");
	}
	*/
	
	int star = 1;

	for (int i = 1; i <= 9; i++)
	{
		if (i == 5)
		{
			for (int j = 0; j < 9; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int j = 1; j <= star; j++)
			{
				printf("*");
			}
			for (int j = 1; j <= 9-2*star; j++)
			{
				printf(" ");
			}
			for (int j = 1; j <= star; j++)
			{
				printf("*");
			}
		}
		 i < 5 ? star++ : star--;
		printf("\n");
	}
}