#include <stdio.h.>

void main(void)
{
	char ch;
	int num;

	printf("���� : ");
	scanf("%d", &num);
	while (getchar() != '\n'); // buffer�� �ܷ��� \n���� �ڵ�

	printf("���� : ");
	scanf("%c", &ch);
}