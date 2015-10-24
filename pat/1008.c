#include <stdio.h>

int main(void)
{
	int size, shift;
	scanf("%d %d", &size, &shift);
	int xs[size];

	int i;
	for (i = 0; i < size; i++) {
		scanf("%d", &xs[i]);
	}
	shift %= size;
	int base = size - shift;

	for (i = 0; i < size; i++) {
		if (i != 0) {
			putchar(' ');
		}
		printf("%d", xs[(base + i) % size]);
	}
	putchar('\n');
	return 0;
}
