#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	int size = 61;
	char s[4][size];
	int i;
	for (i = 0; i < 4; i++) {
		scanf("%s", s[i]);
	}
	
	char *week[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	char *hour = "0123456789ABCDEFGHIJKLMN";
	int begin = 0;
	for (i = 0; s[0][i] != '\0' && s[1][i] != '\0'; i++) {
		if (s[0][i] == s[1][i]
		&& s[0][i] >= 'A' && s[0][i] <= 'G'
		&& begin == 0) {
			begin = 1;
			printf("%s ", week[s[0][i] - 'A']);
		} else if (s[0][i] == s[1][i]
		&& ((s[0][i] >= '0' && s[0][i] <= '9')
		|| (s[0][i] >= 'A' && s[0][i] <= 'N'))
		&& begin == 1) {
			printf("%02ld:", strchr(hour, s[0][i]) - hour);
			break;
		}
	}

	for (i = 0; s[2][i] != '\0' && s[3][i] != '\0'; i++) {
		if (s[2][i] == s[3][i]
		&& isalpha(s[2][i]) != 0) {
			printf("%02d\n", i);
			break;
		}
	}
	return 0;
}
