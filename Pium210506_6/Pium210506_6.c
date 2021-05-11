#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a, n;

long long int pow(int a, int n)
{
    long long int pow = 0;
    for (int i = 1; i <= n; i++)
    {
        pow += i;
    }
    return pow;
}

int main()
{
	scanf("%d%d", &a, &n);
	printf("%lld\n", pow(a, n));
}