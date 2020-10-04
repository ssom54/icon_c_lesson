#define _CTR_SECURE_NO_WATNINGS

#include <stdio.h>
#include <limits.h>

int main() {
	char a;

	printf("문자를 입력하시오:");
	scanf("%c", &a);
	printf("아스키 코드: %d \n", 'a');

	return 0;
}