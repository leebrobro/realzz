#include<stdio.h>
int min(int, int);

int main() {
	int a;
	scanf("%d ", &a);

	for (int i = 0; i < a;i++) {
		int num1, num2;
		scanf("%d %d", &num1, &num2);
		int gcd = 1;

		for (int i = 1; i <= min(num1, num2); i++) {

			if ((num1 % i == 0) && (num2 % i == 0))
				gcd = i;

		}

		printf("%d\n", num1 * num2 / gcd);

	}

	return 0;
}

int min(int num1, int num2) {

	if (num1 < num2)
		return num1;
	else
		return num2;

}