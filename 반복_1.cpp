#include <stdio.h>

int main(void) {
	int n, sum=0;
	
	printf("n값을 입력: ");
	scanf("%d",&n);
	
	if(n == 5) {
		for(int i = 1; i<=5; i++){
			sum += i;
		}
		printf("%d",sum);
	}
	
	else
		printf("end");
} 
