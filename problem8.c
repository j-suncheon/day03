#include <stdio.h>

void main(void)
{

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (j<i)
			{
			printf("-");

			}
			else
			{
				printf("*");
			}
		}
		
		printf("\n");
	}


	
	//for (int i = 6; i <= 10; i++)
	//{
	//	for (int k = i; k >6; k--)
	//	{
	//		printf(" ");
	//	}
	//	for (int j = i; j <11; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
}