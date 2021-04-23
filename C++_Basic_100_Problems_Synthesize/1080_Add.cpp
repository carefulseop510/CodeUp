#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	int i, n, sum = 0;
	scanf("%d", &n);
	for (i = 1; sum < n; i++) {
		sum += i;
	}
	printf("%d", i - 1);

	return 0;
}