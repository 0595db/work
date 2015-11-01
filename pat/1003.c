#include <stdio.h>
#define XS_MAX 101

int main(void)
{
	int size;
	scanf("%d", &size);

	char xs[XS_MAX];
	for (int i = 0; i < size; i++) {
		scanf("%s", xs);

		int a[] = {0, 0, 0};
		int k = 0, cnt_p = 0, cnt_t = 0;
		for (int j = 0; xs[j] != '\0'; j++) {
			if (xs[j] == 'P' && cnt_t == 0) {
				cnt_p++;
				k++;
			} else if (xs[j] == 'T' && cnt_p == 1) {
				cnt_t++;
				k++;
			} else if (xs[j] == 'A' && k < 3) {
					a[k]++;
			} else {
				goto NO;
			}
		}

		if (cnt_p == 1 && cnt_t == 1
		&& a[1] > 0 && a[0] * a[1] == a[2]) {
			puts("YES");
		} else {
			NO:;
			puts("NO");
		}
	}

	return 0;
}
