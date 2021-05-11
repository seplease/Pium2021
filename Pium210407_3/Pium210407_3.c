#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		printf("**\n");
	}
}
/*
3. 별 계단 출력하기 : n을 입력받고 n층의 별 계단 출력
*/

//처음에는 j가 i보다 같기 때문에 (조건 거짓) 공백이 입력 되지 않음
//작은 for문 먼저 실행