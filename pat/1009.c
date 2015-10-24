#include <stdio.h>
#include <string.h>

int main(void)
{

	char xs[82];
	fgets(xs, 82, stdin);
	xs[strlen(xs) - 1] = '\0';

	char *p;
	char *ps[82];
	int i;
	p = strtok(xs, " ");
	for (i = 0; p != NULL; i++) {
		ps[i] = p;
		p = strtok(NULL, " ");
	}

	for (--i; i >= 0; i--) {
		printf("%s", ps[i]);
		if (i != 0) {
			putchar(' ');
		} else {
			putchar('\n');
		}
	}
	return 0;
}
