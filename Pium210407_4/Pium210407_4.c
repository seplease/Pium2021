#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i;

	scanf("%d", &n);

	for (i = 1; i < 7; i++)
		if(1 <= (n - i) && (n - i) <= 6) //�̰� �����ϱ�
		printf("%d %d\n", i, (n - i));
}

/*
4. �� �ֻ����� �� : �ֻ����� ��(n) �Է�
1�� �ֻ��� �� ������������ ������ ��� ��� ���
ex. 5
	1 4
	2 3
	3 2
	4 1
*/