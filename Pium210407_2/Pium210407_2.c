#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, d, n, i;

	scanf("%d %d %d", &a, &d, &n);

	for (i = 1; i < n; i++)
		a += d;
	printf("%d", a);
}
/*
2. �������� : ���� ��(a), ����(d), �� ��° ��(n) �� ������ �Է¹ް�
�� ���������� n��° ���� ����Ѵ�.
ex. 1 3 5
	13
*/