#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mission1()
{
	int arr[5] = { 1,2,3,4,5 };
	int* p;

	p = arr;

	for (int i = 0; i < 5; i++) {
		printf("%d\n", *p + 2);
		p++;
	}
	return 0;
}

int mission2()
{
	int size, n, sum;
	int* Ptr;

	scanf("%d", &size);

	Ptr = (int*)malloc(size * sizeof(int));
	sum = 0;

	for (int i = 0; i < size; i++) {
		scanf("%d", &n);
		Ptr[i] = n;

		sum += n;
	}
	printf("\n%d", sum);

	free(Ptr);

	return 0;
}

int mission3()
{
	int arr[5] = { 1,2,3,4,5 };
	int* p;
	int* tmp;

	p = arr;

	for (int i = 4; i >= 3; i--) {
		tmp = p;
		*p = arr[i];
		arr[i] = *tmp;

		p++;
	}

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	return 0;
}