#include <stdio.h>

int main(void) {
	int n, sum=0;
	
	printf("n���� �Է�: ");
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
