#include <stdio.h>

int max4(int a, int b, int c, int d);

int main(void) {
	printf("%d",max4(2,4,1,6));
}

int max4(int a, int b, int c, int d) {
	int max = a;
	if(b>max)
		max = b;
	if(c>max)
		max = c;
	if(d>max)
		max = d;
	return max;
}
