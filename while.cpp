#include <stdio.h>

int main(void) {
	int a,b;
	printf("a value: ");
	scanf("%d", &a);
	while(true){
		printf("b value: ");
		scanf("%d", &b);
		if(b==a || b<a){
			printf("Enter b value greater then a value!\n");
			continue;
		}
		else{
			printf("b - a is %d: ", b-a);
			break;
		}
	}
	
} 
