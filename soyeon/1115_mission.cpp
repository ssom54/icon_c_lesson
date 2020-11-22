#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int mission1() {
	char s1[10], s2[10];

		scanf("%s", s1);
		scanf("%s", s2);
		
		strcat(s1, s2);

		printf("%s", s1);

	return 0;
}
int mission2() {
	char s1[100];
	int count = 1;

	scanf("%[^\n]s", s1);
	char* ptr = strchr(s1, ' ');

	while (ptr != NULL) {
		ptr = strchr(ptr + 1, ' ');
		count++;
	}

	printf("%d", count);

	return 0;
}
int mission3() {
	char s1[100];
	int ch, count = 0;

	scanf("%[^\n]s", s1);
	ch = _getch();

	char* ptr = strchr(s1, ch);

	while (ptr != NULL) {
		ptr = strchr(ptr + 1, ch);
		count++;
	}

	printf("%d", count);

	return 0;
}
int mission4() {


}