#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	int n;
reload:
	scanf("%d", &n);
	if (n == 0)	goto EXIT;
	printf("%d\n", n);
	if (n != 0) goto reload;
	
EXIT:
	return 0;
}