#include <stdio.h>

int main(void) {
	int n;
	printf("Outputs a square\n");
	printf("Number of inputs: ");
	scanf("%d",&n);
	for(int i =1; i<=n; i++){
		for(int j= 1; j<=n; j++){
			printf("*");
		}
		putchar('\n');
	} 
} 
