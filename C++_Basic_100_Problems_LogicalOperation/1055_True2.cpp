#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == 0 && b == 0)	printf("%d", 0);
	else	printf("%d", 1);

	return 0;
}