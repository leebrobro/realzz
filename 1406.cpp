#include <cstdio>
#include <cstring>
#include<stack>
char a[600000];
int main() {
	std::stack<char> left, right;

	scanf("%s", a);
	int n = strlen(a);
	for (int i = 0; i < n; i++) {
		left.push(a[i]);
	}

	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {

		char what;
		scanf(" %c", &what);
		if (what == 'L') {
			if (!left.empty())
			{
				right.push(left.top());
				left.pop();
			}
		}
		else if (what == 'D') {
			if (!right.empty())
			{
				left.push(right.top());
				right.pop();
			}
		}
		else if (what == 'B') {
			if (!left.empty())
			{
				left.pop();
			}
		}
		else if (what == 'P') {
			char add;
			scanf(" %c", &add);
			left.push(add);
		}


	}

	while (!left.empty()) {

		right.push(left.top());
		left.pop();

	}

	while (!right.empty()) {
		printf("%c", right.top());
		right.pop();
	}

	return 0;

}