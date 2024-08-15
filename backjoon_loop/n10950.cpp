#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a, b, c, coin;
	scanf("%d", &coin);
	for (c = 0; c < coin; c++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}