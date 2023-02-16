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

	printf("�ο����� �Է��ϼ���: ");
	scanf_s("%d", &number);

	int* height = (int*)calloc(number, sizeof(int));

	for (int i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf_s("%d", &height[i]);
	}

	printf("��� Ű�� ���� ���� %d�Դϴ�.", sumof(height, number));
	free(height);

	return 0;
}