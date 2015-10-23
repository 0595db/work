#include <stdio.h>

int main(void)
{
	int size;
	scanf("%d", &size);
	int i;
	for (i = 0; i < size; i++) {
		char xs[101];
		scanf("%s", xs);

		int a = 0, b = 0, c = 0;
		int j, ok = 1;
		for (j = 0; xs[j] != 'P' && xs[j] != '\0'; j++) {
			if (xs[j] == 'A') {
				a++;
			} else {
				ok = 0;
				goto end;
			}
		}
		
		for (++j; xs[j] != 'T' && xs[j] != '\0'; j++) {
			if (xs[j] == 'A') {
				b++;
			} else {
				ok = 0;
				goto end;
			}
		}

		for (++j; xs[j] != '\0'; j++) {
			if (xs[j] == 'A') {
				c++;
			} else {
				ok = 0;
				goto end;
			}
		}

		if ((b > 0 && a * b == c) == 0) {
			ok = 0;
		}

		end:;
		if (ok == 1) {
			puts("YES");
		} else {
			puts("NO");
		}
	}
	return 0;
}
