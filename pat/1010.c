#include <stdio.h>

int main(void)
{
	int a, n;
	int begin = 0;
	while (scanf("%d %d", &a, &n) == 2) {
		if (n > 0) {
			if (begin == 1) {
				putchar(' ');
			} else {
				begin = 1;
			}
			printf("%d %d", a * n, n - 1);
		} else if (begin == 0) {
			printf("0 0");
		}
	}
	putchar('\n');
	return 0;
}
