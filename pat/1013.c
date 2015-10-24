#include <stdio.h>

int main(void)
{
	int size = 104730;
	int signs[size];

	int i;
	for (i = 2; i < size; i++) {
		signs[i] = 1;
	}
	
	for (i = 2; i < size; i++) {
		if (signs[i] == 1) {
			int j;
			for (j = 2 * i; j < size; j += i) {
				signs[j] = 0;
			}
		}
	}

	int begin, end, count = 0;
	scanf("%d %d", &begin, &end);
	for (i = 2; i < size; i++) {
		if (signs[i] == 1) {
			count++;
			if (count >= begin) {
				if (count <= end) {
					if ((count - begin) % 10 != 0) {
						putchar(' ');
					}
					printf("%d", i);
					if ((count - begin) % 10 == 9) {
						putchar('\n');
					}
				} else {
					break;
				}
			}
		}
	}

	return 0;
}
