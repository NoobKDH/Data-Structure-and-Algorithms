#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n) {
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

int main(void) {

	int number;
	printf("Number of human: ");
	scanf_s("%d", &number);
	int* height = (int*)calloc(number, sizeof(int));
	printf("%d ���� Ű�� �Է��ϼ���.\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf_s("%d", &height[i]);
	}
	printf("���� ū Ű�� %d�Դϴ�.\n", maxof(height, number));
	free(height);

	return 0;
}