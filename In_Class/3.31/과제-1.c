//세개의 정수 a, b, c를 입력받고 짝수만 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0) printf("%d ", a);
	if (b % 2 == 0) printf("%d ", b);
	if (c % 2 == 0) printf("%d ", c);
}