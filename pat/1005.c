#include <stdio.h>
#include <stdlib.h>

int compar(const void *pa, const void *pb);
int main(void)
{
	int size;
	scanf("%d", &size);
	int xs[size];

	for (int i = 0; i < size; i++) {
		scanf("%d", &xs[i]);
	}
	qsort(xs, size, sizeof(*xs), compar);
	
	int signs[101] = {0};
	int begin = 0;
	for (int i = 0; i < size; i++) {
		int x = xs[i];
		if (signs[x] == 0) {
			while (x != 1) {
				if (x % 2 == 1) {
					x = 3 * x + 1;
				}

				x /= 2;
				if (x < 101) {
					if (signs[x] == 0) {
						signs[x] = 1;
					} else {
						break;
					}
				}
			}
		}
	}

	for (int i = 0; i < size; i++) {
		int x = xs[i];
		if (signs[x] == 0) {
			if (begin == 1) {
				putchar(' ');
			} else {
				begin = 1;
			}
			printf("%d", x);
		}
	}
	putchar('\n');
	return 0;
}

int compar(const void *pa, const void *pb)
{
	int a = *(int *)pa;
	int b = *(int *)pb;
	return b - a;
}
