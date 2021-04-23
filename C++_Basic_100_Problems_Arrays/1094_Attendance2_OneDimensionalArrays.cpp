#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main() {
	int n;
	int a[10000] = {};
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = n; i >= 1; i--) {
		printf("%d ", a[i]);
	}

	return 0;
}