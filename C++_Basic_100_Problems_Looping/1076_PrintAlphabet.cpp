#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	char x, t = 'a';
	scanf("%c", &x);
	do
	{
		printf("%c ", t++);
	} while (t < x + 1);

	return 0;
}