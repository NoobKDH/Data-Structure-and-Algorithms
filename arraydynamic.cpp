#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int na;
	printf("Number of elements: ");
	scanf("%d", &na);
	int* a = (int *)calloc(na, sizeof(int));

	if (a == NULL)
		puts("Failed to free memory");
	else {
		printf("Enter %d integers.\n", na);
		for (int i = 0; i < na; i++) {
			printf("a[%d]: ", i);
			scanf("%d", &a[i]);
		}
		printf("The values of each element are as follows.");
		for (int i = 0; i < na; i++) {
			printf("a[%d]: %d\n", i, a[i]);
		}
		free(a);
	}

	return 0;
}