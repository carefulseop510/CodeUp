#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main() {
	int day = 1;
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	while (day % a != 0 || day % b != 0 || day % c != 0) {
		day++;
	}
	printf("%d", day);

	return 0;
}