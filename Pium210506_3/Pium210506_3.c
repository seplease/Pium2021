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
//����(-) �� �ԷµǸ� negative, 0 �� �ԷµǸ� zero, �� �ܿ��� positive �� ����Ѵ�.