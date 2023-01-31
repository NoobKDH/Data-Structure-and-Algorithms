#include <stdio.h>

int min4(int a, int b, int c, int d);

int main(void) {
	printf("%d", min4(1, 4, 5, 2));
} 

int min4(int a, int b, int c, int d){
	int min = a;
	if(min>b) min = b;
	if(min>c) min = c;
	if(min>d) min = d;
	return min;
}
