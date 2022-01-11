#include<iostream>
#include<string>
#include<stack>
int main() {

	std::string a;
	std::cin >> a;
	int n = a.size();
	std::stack<int> stk;
	int ans = 0;
	for (int i = 0; i < n; i++) {

		if (a[i] == '(') {
			stk.push(i);

		}
		else if (stk.top() == (i - 1)) {
			stk.pop();
			ans += stk.size();


		}
		else {
			ans++;
			stk.pop();
		}


	}
	printf("%d", ans);

	return 0;




}