#include <stdio.h>

int med(int a, int b, int c){
	if(a >= b)
		if(b>=c)
			return b;
		else if(a>=c)
			return a;
		else
			return c;
	else if(a>c)
		return a;
	else if(b>c)
		return c;
	else
		return b;
		
}

int main(void) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("�߾Ӱ�: %d",med(a, b, c));
} 
