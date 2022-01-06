#include <stdio.h>
char s[111];
int main() {
	while (scanf("%[^\n]\n", s) == 1) {               //\n까지 받고 \n은 뺴라
		printf("%s\n", s);
	}
	return 0;
}
