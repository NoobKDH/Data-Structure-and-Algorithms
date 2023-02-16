#include <stdio.h>
#include <stdlib.h>

int	sumof(const int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

int main(void) {
	int number;

	printf("인원수를 입력하세요: ");
	scanf_s("%d", &number);

	int* height = (int*)calloc(number, sizeof(int));

	for (int i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf_s("%d", &height[i]);
	}

	printf("모든 키의 합한 수는 %d입니다.", sumof(height, number));
	free(height);

	return 0;
}