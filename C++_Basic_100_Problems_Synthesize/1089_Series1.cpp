#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main() {
	int a, d, n;
	scanf("%d%d%d", &a, &d, &n);
	while (1) {
		n--;
		if (n == 0)	break;
		a += d;
	}
	printf("%d", a);

	return 0;
}