#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
	char evaluation;
	scanf("%c", &evaluation);

	switch (evaluation)
	{
		case 'A':
			printf("best!!!");
			break;
		case 'B':
			printf("good!!");
			break;
		case 'C':
			printf("run!");
			break;
		case 'D':
			printf("slowly~");
			break;
		default:
			printf("what?");
	}

	return 0;
}