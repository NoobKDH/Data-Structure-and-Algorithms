#include <stdio.h>
#include <stdlib.h>

double aveof(const int a[], int n) {
	int sum = 0;
	int ave = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	ave = sum / n;

	return ave;
}

int main(void) {
	int number;

	printf("사람의 수를 입력: ");
	scanf_s("%d", &number);
	int* height = (int*)calloc(number, sizeof(int));
	for (int i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf_s("%d", &height[i]);
	}
	printf("키의 평균은 %f입니다\n", aveof(height, number));

	free(height);

	return 0;
}