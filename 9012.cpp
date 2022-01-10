#include <stdio.h>

int main() {
	char string[100] = { 0 };
	int num;
	int check = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%s", string);
		int y = 0;
		while (string[y] != 0) {

			if (string[y] == '(')
				check++;
			if (string[y] == ')')
				check--;
			if (check < 0) {
				printf("NO\n");
				break;
			}

			y++;
		}

		if (check == 0)
			printf("YES\n");
		if (check > 0)
			printf("NO\n");
		check = 0;
	}


}