#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main() {
	int n, t;
	int a[24] = {};
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d", &t);
		a[t] = a[t] + 1;
	}
	for (int i = 1; i <= 23; i++){
		printf("%d ", a[i]);
	}

	return 0;
}