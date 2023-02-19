#include <stdio.h>
#include <stdlib.h>

void ary_copy(int a[], const int b[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}

}

int main(void) {
	int num;
	printf("숫자 입력: ");
	scanf_s("%d", &num);

	int* a = (int*)calloc(num, sizeof(int));
	int* b = (int*)calloc(num, sizeof(int));

	for (int i = 0; i < num; i++) {
		printf("a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
	ary_copy(a,b ,num);

	for (int i = 0; i < num; i++) {
		printf("b[%d]: %d", i, b[i]);
	}

	free(a);
	free(b);

	return 0;
}