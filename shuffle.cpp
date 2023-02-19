#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)

void shuffle(int a[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		int r = rand() % (i + 1);
		if (i != r)
			swap(int, a[i], a[r]);
	}
}

int main(void) {
	int n;
	printf("배열의 수 입력: ");
	scanf_s("%d", &n);

	int* a = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}

	shuffle(a, n);

	printf("배열의 모든 요소의 순서를 뒤섞었습니다.\n");
	for (int i = 0; i < n; i++)
		printf("a[%d] = %d\n", i, a[i]);

	free(a);                            

	return 0;
}