#include <stdio.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

int card_conv(unsigned x, int n, char d[]) {
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;

	if (x == 0)
		d[digits++] = dchar[0];
	else
		while (x) {
			printf("%2d |%7d --- %c\n", n, x, dchar[x % n]);
			printf("    +---------\n");
			d[digits++] = dchar[x % n];
			x /= n;
		}

	for (int i = 0; i < digits / 2; i++) {
		swap(char, d[i], d[digits - i - 1]);
	}

	return digits;
}

int main(void) {
	puts("10진수를 변환");

	int retry;

	do {
		unsigned no;
		int cd;
		char cno[512];

		printf("변환하는 음이 아닌 정수: ");
		scanf_s("%u", &no);

		do {
			printf("어떤 진수로 변환(2~36): ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd>36);

		int dno = card_conv(no, cd, cno);

		printf("%d진수로는", cd);
		for (int i = 0; i < dno; i++)
			printf("%c", cno[i]);
		printf("입니다.\n");

		printf("한번더 할까?(1<---예/0<----아니요");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}