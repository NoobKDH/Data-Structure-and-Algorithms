#include <stdio.h>

int min3(int a, int b, int c);

int main(void) {
	printf("%d", min3(2, 4, 1));
}


int min3(int a, int b, int c) {
	int min = a;
	if(min>b) min =b;
	if(min>c) min =c;
	
	return min;
}
