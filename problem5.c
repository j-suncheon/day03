#include <stdio.h>

void main(void) {

	int a = 5;
	for (int i = 1; i < 6; i++)
	{
		for (int j = a; j < a + 5; j++)
		{
			printf("%d", j);
		}
		printf("\n");
		a--;
	}
}