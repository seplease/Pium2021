#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int month;

	//printf("������ �� ���ΰ���?: ");
	scanf("%d", &month);

	if (month = 12 || (1 <= month && month <= 2))
		printf("winter");
	else if (3 <= month && month <= 5)
		printf("spring");
	else if (6 <= month && month <= 8)
		printf("summer");
	else if (9 <= month && month <= 11)
		printf("fall");
}