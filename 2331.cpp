#include<cstdio>
#include<cmath>
int d[10000] = { 0 };
int main() {
	int a, p;
	int i = 1;
	int sum = 0;
	scanf("%d %d", &a, &p);



	d[0] = a;
	while (i + 1) {


		while (a > 9) {
			int b;

			b = std::pow((a % 10), p);

			sum += b;
			a /= 10;
		}
		int c = 0;
		if (a != 0) {
			c = std::pow(a, p);
		}
		sum += c;
		d[i] = sum;
		a = d[i];
		sum = 0;

		for (int j = 0; j < i; j++) {

			if (d[j] == d[i]) {

				printf("%d ", j);

				return 0;
			}

		}


		i++;

	}


}