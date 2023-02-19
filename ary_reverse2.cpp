#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

void reverse(int a[], int n) {
	for (int i = 0; i < n / 2; i++){
		for (int j = 0; j < n; j++)
			printf("%d ", a[j]);
		printf("\n");
		printf("a[%d]과 a[%d]를 교환합니다.\n", i, n-i-1);
		swap(int, a[i], a[n - i - 1]);
	}
	printf("역순 정렬을 종료합니다.");
}

int main(void) {
	int num;
	printf("배열의 수를 입력: ");
	scanf_s("%d", &num);

	int* ary = (int*)calloc(num, sizeof(int));
	srand(time(NULL));
	for (int i = 0; i < num; i++) {
		ary[i] = rand() % 10;
	}

	reverse(ary, num);
	free(ary);

	return 0;
}