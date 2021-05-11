#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;

	printf("세자리 정수를 입력하세요: ");
	scanf("%d", &num);

	printf("%d\n", num % 10);
	printf("%d\n", (num % 100) / 10);
	printf("%d\n", (num % 1000) / 100);
}