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
int �� ���� �� ���� �Է� �޾�
1���� n������ �������� ����� ����Ͻÿ�.
(0 <= n <= 10000000)
*/