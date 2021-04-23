#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main() {
	long long int a;
	int m, d, n;
	scanf("%lld%d%d%d", &a, &m, &d, &n);
	while (1) {
		n--;
		if (n == 0)	break;
		(a *= m) += d;
	}
	printf("%lld", a);

	return 0;
}