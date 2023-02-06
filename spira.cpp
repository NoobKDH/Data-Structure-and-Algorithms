#include <stdio.h>

void spira(int n);

int main(void) {
	int n;
	do{
		printf("Input n: ");
		scanf("%d",&n);
	} while(n<=0);
	
	spira(n);
}

void spira(int n) {
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			printf(" ");
		}
		for(int j=1; j<= ((i-1)*2)+1; j++){
			printf("*");
		}
		putchar('\n');
	}
}
