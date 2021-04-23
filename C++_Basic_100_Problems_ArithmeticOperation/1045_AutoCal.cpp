#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2f\n", (float) a / b);

	return 0;
}