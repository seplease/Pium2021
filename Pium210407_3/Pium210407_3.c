#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		printf("**\n");
	}
}
/*
3. �� ��� ����ϱ� : n�� �Է¹ް� n���� �� ��� ���
*/

//ó������ j�� i���� ���� ������ (���� ����) ������ �Է� ���� ����
//���� for�� ���� ����