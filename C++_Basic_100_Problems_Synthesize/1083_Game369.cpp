#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		if (i % 3 == 0) printf("X ");
		else printf("%d ", i);
	}

	return 0;
}