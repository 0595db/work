#include <stdio.h>
#define XS_MAX 101

int main(void)
{
	char xs[XS_MAX];
	scanf("%s", xs);

	int sum = 0;
	for (int i = 0; xs[i] != '\0'; i++) {
		sum += (int)(xs[i] - '0');
	}

	sprintf(xs, "%d", sum);
	char *base[] = {"ling", "yi", "er", "san", "si", "wu", "liu",
	"qi", "ba", "jiu", };

	for (int i = 0; xs[i] != '\0'; i++) {
		if (i != 0) {
			putchar(' ');
		}
		printf("%s", base[xs[i] - '0']);
	}
	putchar('\n');
	
	return 0;
}
