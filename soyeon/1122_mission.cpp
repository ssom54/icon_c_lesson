#include <stdio.h>
#include <math.h>

struct score {
	int korean;
	int math;
	int society;
	int science;
};
int mission1() {
	int n, sum = 0, average;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		struct score si;
		scanf("%d %d %d %d", &si.korean, &si.math, &si.society, &si.science);
		sum = sum + si.korean + si.math + si.society + si.science;
	}
	average = sum / (n * 4);
	printf("%d", average);

	return 0;
}

struct point {
	int x;
	int y;
};
int mission2() {
	struct point p1, p2;
	int xd, yd;
	double distance;

	scanf("%d %d", &p1.x, &p1.y);
	scanf("%d %d", &p2.x, &p2.y);

	xd = p1.x - p2.x;
	yd = p1.y - p2.y;

	distance = sqrt(xd * xd + yd * yd);
	printf("%f", distance);

	return 0;
}

typedef enum _Month {
	Jan = 1,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec,
	MonthCount
} Month;

int main() {
	for (Month i = Jan; i < MonthCount; i++) {
		printf("%d ", i);
	}
	//교재에서 비슷하게 나온 예제는 실행이 잘 됐었는데 여기서만 i++에 오류가 생깁니다ㅠㅠ
	return 0;
}