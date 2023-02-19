#include <stdio.h>
#include <stdlib.h>



void ary_rcopy(int a[],  int b[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = b[n - 1 - i];
	}
}

int main(void) {
	int num;
	printf("숫자를 입력: ");
	scanf_s("%d", &num);

	int* x = (int*)calloc(num, sizeof(int));
	int* y = (int*)calloc(num, sizeof(int));

	for (int i = 0; i < num; i++) {
		printf("b[%d]: ", i);
		scanf_s("%d", &y[i]);
	}
	ary_rcopy(x, y, num);
	
	for (int i = 0; i < num; i++)
		printf("a[%d]: %d", i, x[i]);

	free(x);
	free(y);

	return 0;
}