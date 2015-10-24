#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);
	int a = x / 100;
	x %= 100;
	int b = x / 10;
	x %= 10;
	int c = x;

	int i;
	for (i = 0; i < a; i++) {
		putchar('B');
	}

	for (i = 0; i < b; i++) {
		putchar('S');
	}

	for (i = 1; i <= c; i++) {
		printf("%d", i);
	}

	putchar('\n');
	return 0;
}
