#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main() {
	int n;
	int a[10000] = {};
	int min = 10000;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (min > a[i])	min = a[i];
	}
	printf("%d", min);

	return 0;
}