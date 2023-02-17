#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxof(const int a[], int n) {
	int max = a[0];
	for (int i = 0; i < n; i++)
		if (max < a[i]) max = a[i];
	return max;
}

int main(void) {
	int number = 1;
	srand(time(NULL));
	number = 5 + rand() % 16;
	printf("사람의 수: %d ",number);

	int* height = (int*)calloc(number, sizeof(int));

	srand(time(NULL));

	for (int i = 0; i < number; i++) {
		height[i] = 100 + rand() % 90;
		printf("height[%d] = %d", i, height[i]);
	}

	printf("가장 큰 키는 %d입니다", maxof(height, number));
	free(height);

	return 0;
}