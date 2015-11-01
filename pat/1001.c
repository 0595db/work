#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);
	
	int i;
	for (i = 0; x != 1; i++) {
		if (x % 2 == 1) {
			x = 3 * x + 1;
		}

		x /= 2;
	}

	printf("%d\n", i);
	return 0;
}
