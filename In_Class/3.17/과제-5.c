// 실수(float) 1개를 입력받아 저장한 후,
// 저장되어 있는 값을 소수점 셋 째 자리에서 반올림하여
// 소수점 이하 둘 째 자리까지 출력하시오.

#include <stdio.h>
#include <string.h>

int main(void)
{
	float num;
	scanf_s("%f", &num);
	printf("%.2f", num);
}