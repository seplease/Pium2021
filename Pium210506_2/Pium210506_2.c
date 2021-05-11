#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

void f(int n)
{
	if (n % 2 == 0)
		printf("even");
	else
		printf("odd");
}

int main()
{
	scanf("%d", &n);
	f(n);
	return 0;
}
//홀수가 입력되면 odd, 짝수가 입력되면 even을 출력한다.