#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a, b;


int main()
{
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(a, b));
}
/*
int 형 자연수 두 개를 입력받아
최대공약수(GCD, Greatest Common Divisor)를 출력하시오.
*/