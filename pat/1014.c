#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	int row = 4, col = 61;
	char s[row][col];
	int i;
	for (i = 0; i < row; i++) {
		scanf("%s", s[i]);
	}
	
	char *p = NULL;
	char *weeks = "ABCDEFG";
	char *hours = "0123456789ABCDEFGHIJKLMN";
	char *base[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	int begin = 0;
	char *s1 = s[0];
	char *s2 = s[1];
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
		if (s1[i] == s2[i]) {
			if (begin == 0
			&& (p = strchr(weeks, s1[i])) != NULL) {
				printf("%s ", base[p - weeks]);
				begin = 1;
			} else if (begin == 1
			&& (p = strchr(hours, s1[i])) != NULL) {
				printf("%02ld:", p - hours);
				break;
			}
		}
	}
	
	s1 = s[2];
	s2 = s[3];
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
		if (s1[i] == s2[i] && isalpha(s1[i]) != 0) {
			printf("%02d\n", i);
			break;
		}
	}
	return 0;
}
