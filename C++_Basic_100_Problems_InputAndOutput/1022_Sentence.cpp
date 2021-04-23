#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
    char data[2001];
    fgets(data, 2000, stdin);
    printf("%s", data);

    return 0;
}