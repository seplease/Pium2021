#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, sum;

	sum = 0;

	scanf("%d", &n);

	for (i = 1; sum < n; i++)
		sum += i;
	printf("%d\n", sum);
}
/*

1. �������!���� �׸�~
num�� �Է¹ް� 1���� �� ������ ���ų� Ŀ�������� ���س�����.
���� �Էµ� �������� ũ�ų� �������� ��� �׶������� ���� ����Ѵ�.
ex. 57
66

*/