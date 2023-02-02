#include <stdio.h>

int main(void) {
	int n, sum;
	printf("n을 입력하시오: ");
	scanf("%d", &n);
	
	sum = (n*(n+1))/2;
	printf("%d", sum);
}
