#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

void f(int n)
{
	if (n < 0)
		printf("negative");
	if (n == 0)
		printf("zero");
	if (n > 0)
		printf("positive");
}

int main()
{
	scanf("%d", &n);
	f(n);
	return 0;
}
//음수(-) 가 입력되면 negative, 0 이 입력되면 zero, 그 외에는 positive 를 출력한다.