#include <stdio.h.>

void main(void)
{
	char ch;
	int num;

	printf("정수 : ");
	scanf("%d", &num);
	while (getchar() != '\n'); // buffer에 잔류한 \n제거 코드

	printf("문자 : ");
	scanf("%c", &ch);
}