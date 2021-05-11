//2. 정수 3개를 입력받고, 각각의 숫자들이 짝수인지/홀수인지 판별해
//짝수끼리의 합과 홀수끼리의 합을 구해 출력한다.
//ex.세 정수를 입력하세요 : 2 4 7
//짝수의 합 : 6, 홀수의 합 : 7

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2, num3, even, odd;

	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 % 2 == 0)
		even += num1
	else(num2 % 2 == 0)
		even += num2
	if(num3 % 2 == 0)
		even += num3
	else(num1 % 2 == 1)
		odd += num1
	if(num2 % 2 == 1)
		odd += num2
	else (num3 % 2 == 1)
		odd += num3

		printf("짝수의 합: %d, 홀수의 합: %d\n", even, odd);
}