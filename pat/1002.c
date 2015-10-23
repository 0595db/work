#include <stdio.h>

int main(void)
{
	char xs[101];
	scanf("%s", xs);

	int i, total = 0;
	for (i = 0; xs[i] != '\0'; i++) {
		total += (xs[i] - '0');
	}

	sprintf(xs, "%d", total);
	char *base[] = {"ling", "yi", "er", "san", "si", "wu", "liu",
	"qi", "ba", "jiu"};
	for (i = 0; xs[i] != '\0'; i++) {
		if (i != 0) {
			putchar(' ');
		}
		printf("%s", base[(xs[i] - '0')]);
	}
	putchar('\n');
	return 0;
}
