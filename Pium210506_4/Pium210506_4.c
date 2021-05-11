#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

long long int f(int n)
{
    long long int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    return result;
}
int main()
{
	scanf("%d", &n);
	printf("%lld\n", f(n));
}
/*
int 형 정수 한 개를 입력 받아
1부터 n까지의 정수합을 계산해 출력하시오.
(0 <= n <= 10000000)
*/