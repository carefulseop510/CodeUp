#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	int c;
	scanf("%X", &c);
	for (int i = 1; i < 16; i++) {
		printf("%X*%X=%X\n", c, i, c * i);
	}

	return 0;
}