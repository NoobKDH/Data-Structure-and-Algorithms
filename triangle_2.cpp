#include <stdio.h>

void triangleLU (int n);
void triangleRU (int n);
void triangleRB (int n);

int main(void) {
	int n;
	do{
		printf("Input n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	triangleLU(n);
	triangleRU(n);
	triangleRB(n);
	
	return 0;
}

void triangleLU (int n){
	for(int i=1; i<=n; i++){
		for(int j=n; j>=i; j--){
			printf("*");
		}
		putchar('\n');
	}
	putchar('\n');
}

void triangleRU (int n){
	for(int i=1; i<=n; i++){
		for(int j=0;j<i-1;j++){
			printf(" ");
		}
		for(int j=n; j>=i; j--){
			printf("*");
		}
		putchar('\n');
	}
	putchar('\n');
}

void triangleRB (int n){
	for(int i=1; i<=n; i++){
		for(int j=n;j>i;j--){
			printf(" ");
		}
		for(int j=0; j<i; j++){
			printf("*");
		}
		putchar('\n');
	}
	putchar('\n');
}
