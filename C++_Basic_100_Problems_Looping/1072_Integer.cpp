#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
int main()
{
	int n, m;
	int cnt = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
reget:
	scanf("%d", &m);
	arr[cnt++] = m;
	if (n-- > 1) goto reget;

out:
	printf("%d\n", arr[n++]);
	if (cnt-- > 1) goto out;

	free(arr);
	return 0;
}