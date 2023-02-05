#include <stdio.h>

int main(void) {
	int h, w;
	printf("Outputs a rectangle\n");
	printf("height: ");
	scanf("%d", &h);
	printf("width: ");
	scanf("%d", &w);
	
	for(int i=1; i<=h; i++){
		for(int j=1; j<=w; j++){
			printf("*");
		}
		putchar('\n');
	}
}
