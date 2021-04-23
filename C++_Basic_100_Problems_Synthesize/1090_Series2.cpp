#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main() {
	long long int a;
	int r, n;
	scanf("%lld%d%d", &a, &r, &n);
	while (1) {
		n--;
		if (n == 0)	break;
		a *= r;
	}
	printf("%lld", a);

	return 0;
}