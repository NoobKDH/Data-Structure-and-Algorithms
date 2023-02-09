#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *x = calloc(1, sizeof(int)); // 1개의 int형 포인터에 메모리 할당 
	if(x == NULL) {
		puts("Memory allocation failed");
	}else {
		*x = 57;
		printf("*x = %d\n", *x);
		free(x); //int type pointer allocation memory clear
	}	
	
	return 0;
}
