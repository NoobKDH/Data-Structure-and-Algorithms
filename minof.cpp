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

	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &number);
	int* height = (int*)calloc(number, sizeof(int));

	for (int i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf_s("%d", &height[i]);
	}

	printf("���� ���� Ű�� %d�Դϴ�.", minof(height, number));
	free(height);

	return 0;
}