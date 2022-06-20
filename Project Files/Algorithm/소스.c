#include <stdio.h>
#include <math.h>
#define Magnifier 10

//두 점 사이의 길이
float length(float x1, float y1, float x2, float y2) {
	float result = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
	return result;
}

//내분점의 X좌표
float inter_x(float x1, float x2, float m, float n) {
	float result = (m * x2 + n * x1)/(m + n);
	return result;
}

//내분점의 Y좌표
float inter_y(int y1, int y2, int m, int n) {
	int result = (m * y2 + n * y1)/(n + m);
	return result;
}


//메인
int main(void) {
	float x1 = 0.0f;
	float y1 = 0.0f;
	float x2 = 0.0f;
	float y2 = 6.0f;
	float x3 = 0.0f;
	float y3 = 6.0f;
	float x4 = 12.0f;
	float y4 = 6.0f;

	float Line1 = length(x1, y1, x2, y2);
	float Line2 = length(x3, y3, x4, y4);

	for (int m = 0; m < Magnifier; m++) {
		float n = Line1-m;
		float ix1 = inter_x(x1, x2, m, n);
		float iy1 = inter_y(y1, y2, m, n);
		float ix2 = inter_x(x3, x4, m, n);
		float iy2 = inter_y(y3, y4, m, n);

		printf("%.0f,",inter_x(ix1, ix2, m, n));
	}
	printf("\n");
	for (int m = 0; m < Magnifier; m++) {
		float n = Line1 - m;
		float ix1 = inter_x(x1, x2, m, n);
		float iy1 = inter_y(y1, y2, m, n);
		float ix2 = inter_x(x3, x4, m, n);
		float iy2 = inter_y(y3, y4, m, n);

		printf("%.0f,",inter_y(iy1, iy2, m, n));
	}
}

