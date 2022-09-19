#include <stdio.h>

void main(void) {

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j >=0; j--)
		{
			printf("*");
		}
		printf("\n");
	}



	/*
	int a=5;
	for (int i = 0; i < 5; i++)
	{
		for (int j = a; j <= 5; j++)
		{
			printf("*");
		}
		printf("\n");
		a--;
	}
	*/
}