#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i;

	scanf("%d", &n);

	for (i = 1; i < 7; i++)
		if(1 <= (n - i) && (n - i) <= 6) //이거 생각하기
		printf("%d %d\n", i, (n - i));
}

/*
4. 두 주사위의 합 : 주사위의 합(n) 입력
1번 주사위 값 오름차순으로 가능한 경우 모두 출력
ex. 5
	1 4
	2 3
	3 2
	4 1
*/