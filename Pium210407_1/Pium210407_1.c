#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (i % 3 != 0)
			printf("%d ", i);
	}
}
/*
1. n�� ��� ��� : �ݺ� ����(limit), ������ ��(n) �� ������ �Է¹ް�
1���� �ݺ����������� �� �� ������ ���� ����� ������ ��� ���� ����Ѵ�.
ex. 10 3
	 1 2 4 5 7 8 10
*/