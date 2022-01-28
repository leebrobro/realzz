#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int cnt = 1;
	int num;
	long long int ans = 1;
	int max = 1;
	scanf("%d", &num);

	long long int* ptr = (long long int*)malloc(sizeof(long long int) * num);

	for (int i = 0; i < num; i++) {
		int number;
		scanf("%lld", &ptr[i]);
	}

	sort(ptr, ptr + num);


	ans = ptr[0];
	for (int i = 1; i <= num; i++) {


		if (ptr[i - 1] != ptr[i]) {

			if (max < cnt) {
				ans = ptr[i - 1];
				max = cnt;
			}
			cnt = 1;

		}
		else {
			cnt++;
		}

	}
	if (num == 1)
	{
		printf("%d", ptr[0]);
	}
	else { printf("%lld", ans); }


	return 0;
}