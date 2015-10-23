#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);

	int step;
	for (step = 0; x != 1; step++) {
		if (x % 2 == 1) {
			x = 3 * x + 1;
		}
		x /= 2;
	}
	printf("%d\n", step);
	return 0;
}
