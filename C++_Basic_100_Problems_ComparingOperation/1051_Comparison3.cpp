#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a <= b)	printf("%d", 1);
	else printf("%d", 0);

	return 0;
}