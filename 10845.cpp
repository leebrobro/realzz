#include<stdio.h>
#include<string>


int main() {

	int q[100000];

	int num;
	scanf("%d", &num);

	int begin = 0;
	int end = 0;


	for (int i = 0; i < num; i++) {

		char s[100];
		scanf("%s", s);
		if (!strcmp(s, "push")) {
			int digit;
			scanf("%d", &digit);
			q[end] = digit;
			end++;

		}
		else if (!strcmp(s, "pop")) {
			if (begin == end) {
				printf("-1\n");
			}
			else {
				printf("%d\n", q[begin]);
				begin++;
			}
		}
		else if (!strcmp(s, "size")) {

			printf("%d\n", end - begin);

		}
		else if (!strcmp(s, "empty")) {
			if (begin == end) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}
		else if (!strcmp(s, "front")) {
			if (begin == end) {
				printf("-1\n");
			}
			else
			{
				printf("%d\n", q[begin]);

			}

		}
		else if (!strcmp(s, "back")) {
			if (begin == end) {
				printf("-1\n");
			}
			else
			{
				printf("%d\n", q[end - 1]);

			}

		}


	}
}