#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, j;

	scanf("%d", &n);

	for (i = n; i > 0; i--)
	{
		for (j = i; j > 1; j--)
			printf(" ");
		for (j = 1; j <= n; j++)
			printf("*");
		printf("\n");
	}
	printf("\n");
}
/*
평행사변형 출력 : 평행사변형 높이 n 입력
밑변과 높이가 같은 평행사변형을 출력한다
4
    ****
   ****
  ****
 ****
 */