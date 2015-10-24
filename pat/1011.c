#include <stdio.h>

int main(void)
{
	int size;
	scanf("%d", &size);

	int i;
	long long a, b, c;
	for (i = 1; i <= size; i++) {
		scanf("%lld %lld %lld", &a, &b, &c);
		if (a + b > c) {
			printf("Case #%d: true\n", i);
		} else {
			printf("Case #%d: false\n", i);
		}
	}

	return 0;
}
