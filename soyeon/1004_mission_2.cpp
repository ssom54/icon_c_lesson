#define _CTR_SECURE_NO_WATNINGS

#include <stdio.h>
#include <limits.h>

int main() {
	float a;
	float b;

	printf("면적을 제곱미터 단위로 입력하시오:");
	scanf("%f", &a);

	b = a / 3.3058;
	printf("%.2f제곱미터는 %.2f평입니다.", a, b);

	return 0;
}