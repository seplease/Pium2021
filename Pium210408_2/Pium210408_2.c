#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, j;

	scanf("%d", &n);

	for (i = n; i > 0; i--)
	{
		for (j = i; j > 1; j--)
			printf(" ");
		for (j = 1; j <= n; j++)
			printf("*");
		printf("\n");
	}
	printf("\n");
}
/*
����纯�� ��� : ����纯�� ���� n �Է�
�غ��� ���̰� ���� ����纯���� ����Ѵ�
4
    ****
   ****
  ****
 ****
 */