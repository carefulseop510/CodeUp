#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	char c;
	do 
	{
		scanf("%c ", &c);
		printf("%c\n", c);
	} while (c != 'q');

	return 0;
}