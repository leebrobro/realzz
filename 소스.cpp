#include <stdio.h>
char s[111];
int main() {
	while (scanf("%[^\n]\n", s) == 1) {               //\n���� �ް� \n�� ����
		printf("%s\n", s);
	}
	return 0;
}
