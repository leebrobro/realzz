#include<stdio.h>
int main() {
	int a, b;
	int sum = 0;

	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%1d", &b);           //1���ڸ� �ްڴ�.
		sum += b;
	}
	printf("%d", sum);

}