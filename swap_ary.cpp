#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{type t = x; x = y; y=t;} while(0);

void ary_reverse(int a[], int n) {
	for (int i = 0; i < n / 2; i++)
		swap(int, a[i], a[n - i - 1]);
}

int main(void) {
	int nx;

	printf("요소의 개수: ");
	scanf_s("%d", &nx);
	int* x = (int *) calloc(nx, sizeof(int));
	for (int i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf_s("%d", &x[i]);
	}
	ary_reverse(x, nx);
	printf("x배열을 역순으로\n");
	for (int i = 0; i < nx; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	free(x);

	return 0;
}