#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	while (1){
		scanf("%d %d", &a, &b);
		if (a !=0 || b != 0)
			printf("%d\n", a + b); 
		else
			break;
	}
	return 0;
}
int solve1() {
	int n, i;
	scanf("%d", &n);

	for (i = 1; i < 10; i++) 
		printf("%d * %d = %d\n", n, i, n * i);

	return 0;
}
int solve2()
{
	int x, y, quadrant;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0) {
		if (y > 0)
			quadrant = 1;
		else
			quadrant = 4;
	}
	else {
		if (y > 0)
			quadrant = 2;
		else
			quadrant = 3;
	}
	printf("%d", quadrant);

	return 0;
}
int solve3()
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= (n - i); j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
int solve4()
{
	int h, m;
	scanf("%d %d", &h, &m);

	if (m < 45) {
		if (h == 0)
			h = 23;
		else
			h -= 1;
		m += 15;
	}
	else
		m -= 45;

	printf("%d %d", h, m);
	return 0;
}