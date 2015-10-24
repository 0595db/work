#include <stdio.h>

int main(void)
{
	int size;
	scanf("%d", &size);

	int i;
	int a1 = 0, a2 = 0, sign2 = 1, INCASE1 = 0, a3 = 0,
	a4 = 0, cnt4 = 0, a5 = 0;
	for (i = 0; i < size; i++) {
		int x;
		scanf("%d", &x);
		switch (x % 5) {
		case 0: {
			if (x % 2 == 0) {
				a1 += x;
			}
			break;
		}
		case 1: {
			INCASE1 = 1;
			a2 += sign2 * x;
			sign2 *= -1;
			break;
		}
		case 2: {
			a3++;
			break;
		}
		case 3: {
			a4 += x;
			cnt4++;
			break;
		}
		case 4: {
			if (a5 < x) {
				a5 = x;
			}
			break;
		}
		default:
		break;
		}
	}

	if (a1 == 0) {
		printf("N ");
	} else {
		printf("%d ", a1);
	}
	if (INCASE1 == 0) {
		printf("N ");
	} else {
		printf("%d ", a2);
	}
	if (a3 == 0) {
		printf("N ");
	} else {
		printf("%d ", a3);
	}
	if (a4 == 0) {
		printf("N ");
	} else {
		printf("%.1f ", (double)a4 / cnt4);
	}
	if (a5 == 0) {
		printf("N\n");
	} else {
		printf("%d\n", a5);
	}
	return 0;
}
