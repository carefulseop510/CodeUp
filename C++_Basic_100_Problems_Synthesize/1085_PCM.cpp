#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main() {
	long long int h;
	int b, c, s;
	scanf("%lld%d%d%d", &h, &b, &c, &s);

	printf("%.1f MB", (double)(h * b * c * s) / 8 / 1024 / 1024);

	return 0;
}