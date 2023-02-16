#include <stdio.h>
#include <stdlib.h>



int minof(const int a[], int n) {
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (min > a[i])
			min = a[i];
	}

	return min;
}

int main(void) {
	int number;

	printf("숫자를 입력하세요: ");
	scanf_s("%d", &number);
	int* height = (int*)calloc(number, sizeof(int));

	for (int i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf_s("%d", &height[i]);
	}

	printf("가장 작은 키는 %d입니다.", minof(height, number));
	free(height);

	return 0;
}