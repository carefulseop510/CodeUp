#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	int n;
	scanf("%d", &n);
	
	if (n > 0)	printf("plus\n");
	else if(n < 0)	printf("minus\n");

	if (n % 2 == 0)	printf("even\n");
	else if (n % 2 != 0)	printf("odd\n");

	return 0;
}