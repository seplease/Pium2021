#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printStar(int n);
int main(void)
{
	int n;

	scanf("%d", &n);

	printfStar(n);
}
void printStar(int n)
{
	int i, j;
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