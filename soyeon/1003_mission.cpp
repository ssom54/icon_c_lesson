#define _CTR_SECURE_NO_WATNINGS

#include <stdio.h>
#include <limits.h>

int main() {
	int A, B;

	scanf("%d", &A);
	scanf("%d", &B);

	printf("\n%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);

	return 0;
}
int solve() {
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	printf("\n%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	return 0;
}
int solve3() {
	unsigned int a, b, result3, result4, result5, result6;

	scanf("%d", &a);
	scanf("%d", &b);

	result3 = b % 10 * a;
	result4 = (b % 100 - b % 10) / 10 * a;
	result5 = b / 100 * a;
	result6 = result3 + result4 * 10 + result5 * 100;

	printf("\n%d \n%d \n%d \n", result3, result4, result5);
	printf("%d \n", result6);

	return 0;
}