#include <stdio.h>
#include <stdlib.h>

struct info {
	int ID;
	int de;
	int cai;
	int total;
	int type;
};

int get_type(int low, int high, struct info x);
int compar(const void *pa, const void *pb);
int main(void)
{
	int size, low, high, count = 0;
	scanf("%d %d %d", &size, &low, &high);
	struct info user[size];
	
	int i;
	for (i = 0; i < size; i++) {
		scanf("%d %d %d", &user[i].ID, &user[i].de,
		&user[i].cai);
		user[i].total = user[i].de + user[i].cai;
		user[i].type = get_type(low, high, user[i]);
		if (user[i].type != 5) {
			count++;
		}
	}
	
	printf("%d\n", count);
	qsort(user, size, sizeof(*user), compar);
	
	for (int i = 0; i < count; i++) {
		printf("%08d %d %d\n", user[i].ID, user[i].de,
		user[i].cai);
	}
	return 0;
}

int get_type(int low, int high, struct info x)
{
	if (x.de >= high) {
		if (x.cai >= high) {
			return 1;
		} else if (x.cai >= low) {
			return 2;
		} else {
			return 5;
		}
	} else if (x.de >= low) {
		if (x.cai >= high) {
			return 4;
		} else if (x.cai >= low) {
			if (x.de >= x.cai) {
				return 3;
			} else {
				return 4;
			}
		} else {
			return 5;
		}
	} else {
		return 5;
	}
	return 5;
}

int compar(const void *pa, const void *pb)
{
	struct info a = *(struct info *)pa;
	struct info b = *(struct info *)pb;

	if (a.type == b.type) {
		if (a.total == b.total) {
			if (a.de == b.de) {
				return a.ID - b.ID;
			} else {
				return b.de - a.de;
			}
		} else {
			return b.total - a.total;
		}
	} else {
		return a.type - b.type;
	}
	return 0;
}
