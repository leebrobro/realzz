#include<stdio.h>
int gcdf(int, int);

int main() {

	int a;
	scanf("%d", &a);
	int arr[150];



	for (int i = 0; i < a; i++) {

		int b;
		scanf("%d", &b);

		for (int j = 0; j < b;j++)
		{
			int ran;
			scanf("%d", &ran);
			arr[j] = ran;
		}


		long long int sum = 0;

		for (int j = 0; j <= b - 2; j++) {



			for (int i = j + 1; i <= b - 1; i++) {

				int gcd;
				gcd = gcdf(arr[j], arr[i]);


				sum += gcd;

			}


		}
		printf("%lld\n", sum);
	}

	return 0;
}


int gcdf(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}