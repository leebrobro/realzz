#include<iostream>
#include<string>
#include<stack>
#include<queue>

int main() {

	int num;
	scanf("%d", &num);
	std::queue<int> arr;

	int del;
	scanf("%d", &del);

	for (int i = 1; i < num + 1; i++) {

		arr.push(i);

	}


	printf("<");
	while (!arr.empty()) {

		for (int y = 0; y < del - 1; y++) {


			arr.push(arr.front());
			arr.pop();

		}
		printf("%d", arr.front());

		arr.pop();
		if (!arr.empty()) {
			printf(", ");
		}
	}
	printf(">");

	return 0;
}