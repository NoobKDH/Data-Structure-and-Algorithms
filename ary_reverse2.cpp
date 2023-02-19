#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

void reverse(int a[], int n) {
	for (int i = 0; i < n / 2; i++){
		for (int j = 0; j < n; j++)
			printf("%d ", a[j]);
		printf("\n");
		printf("a[%d]�� a[%d]�� ��ȯ�մϴ�.\n", i, n-i-1);
		swap(int, a[i], a[n - i - 1]);
	}
	printf("���� ������ �����մϴ�.");
}

int main(void) {
	int num;
	printf("�迭�� ���� �Է�: ");
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