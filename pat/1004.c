#include <stdio.h>
#include <stdlib.h>

struct info {
	char name[11];
	char ID[11];
	int score;
};

int compar(const void *pa, const void *pb);
int main(void)
{
	int size;
	scanf("%d", &size);

	struct info *user = malloc(size * sizeof(*user));
	int i;
	for (i = 0; i < size; i++) {
		scanf("%s %s %d", 
		user[i].name, user[i].ID, &user[i].score);
	}

	qsort(user, size, sizeof(*user), compar);
	printf("%s %s\n", user[size - 1].name, user[size - 1].ID);
	printf("%s %s\n", user[0].name, user[0].ID);
	free(user);
	return 0;
}

int compar(const void *pa, const void *pb)
{
	struct info a = *(struct info *)pa;
	struct info b = *(struct info *)pb;
	return a.score - b.score;
}
