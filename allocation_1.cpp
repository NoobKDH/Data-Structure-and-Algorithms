#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *x = calloc(1, sizeof(int)); // 1���� int�� �����Ϳ� �޸� �Ҵ� 
	if(x == NULL) {
		puts("Memory allocation failed");
	}else {
		*x = 57;
		printf("*x = %d\n", *x);
		free(x); //int type pointer allocation memory clear
	}	
	
	return 0;
}
