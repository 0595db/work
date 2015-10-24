#include <stdio.h>

int main(void)
{
	int size, max_index;
	scanf("%d", &max_index);
	size = max_index + 1;
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
	
	int count = 0;
	for (i = 2 + 2; i < size; i++) {
		if (signs[i] == 1 && signs[i - 2] == 1) {
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
