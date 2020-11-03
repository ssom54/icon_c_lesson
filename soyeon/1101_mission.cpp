#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mission1() {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz \n");
		else if (i % 3 == 0)
			printf("Fizz \n");
		else if (i % 5 == 0)
			printf("Buzz \n");
		else
			printf("%d \n", i);
	}
	return 0;
}
int mission2() {
	char c;
	float f;

	scanf("%c\n%f", &c, &f);
	printf("%p\n%p", &c, &f);

	return 0;
}
int mission3() {
	int num1 = 10, num2 = 20;
	int* p1, * p2;

	p1 = &num1;
	p2 = &num2;
	printf("%d %d\n", *p1 - 1, *p2 - 1);

	p1 = &num2;
	p2 = &num1;
	printf("%d %d\n", *p1 - 1, *p2 - 1);

	return 0;
}