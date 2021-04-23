#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	int sum = 0;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0) sum = sum + i;
	}
	printf("%d", sum);

	return 0;
}