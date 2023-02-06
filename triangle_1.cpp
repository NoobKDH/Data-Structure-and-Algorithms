#include <stdio.h>

void triangleLB(int n);

int main(void) {
	int n;
	do {
		printf("Input n: ");
		scanf("%d",&n);
	}while(n<=0);
	triangleLB(n);
	return 0;
}

void triangleLB(int n){
	for(int i=1; i<=n; i++){
		for(int j =1;j<=i;j++){
			printf("*");
		}
		putchar('\n');
	}
}
