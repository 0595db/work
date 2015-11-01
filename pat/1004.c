#include <stdio.h>
#include <stdlib.h>
#define MAX 11

struct info {
	char	name[MAX];
	char	id[MAX];
	int 	mark;
};

int compar(const void *pa, const void *pb);
int main(void)
{
	int size;
	scanf("%d",&size);

	struct info xs[size];

	for (int i = 0; i < size; i++) {
		scanf("%s %s %d", xs[i].name, xs[i].id, &xs[i].mark);
	}
	qsort(xs, size, sizeof(*xs), compar);

	printf("%s %s\n", xs[size - 1].name, xs[size - 1].id);
	printf("%s %s\n", xs[0].name, xs[0].id);

	return 0;
}

int compar(const void *pa, const void *pb)
{
	struct info a = *(struct info *)pa;
	struct info b = *(struct info *)pb;
	return a.mark - b.mark;
}
