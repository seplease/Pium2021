#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int deposit, target, i, result;

	result = 0;

	scanf("%d %d", &deposit, &target);

	for (i = 1; ; i++)
	{
		result = (result + deposit) * 1.02;
		if (result >= target)
			break;
	}
	printf("%d %d %d", i / 12, i % 12, result);
}