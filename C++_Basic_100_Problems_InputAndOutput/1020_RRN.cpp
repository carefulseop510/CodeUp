#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int b, f;
    scanf("%d-%d", &f, &b);
    printf("%06d%07d", f, b);

    return 0;
}