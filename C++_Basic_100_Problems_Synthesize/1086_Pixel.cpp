#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main() {
	int w, h, b;
	scanf("%d%d%d", &w, &h, &b);

	printf("%.2f MB", (double)(w * h * b) / 8 / 1024 / 1024);

	return 0;
}