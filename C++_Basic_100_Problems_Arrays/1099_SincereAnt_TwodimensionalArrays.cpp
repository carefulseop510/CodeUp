#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int maze[10][10];
	int* cursor;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &maze[i][j]);
		}
	}
	cursor = &maze[1][1];

	while (1) {
		if (*cursor == 2) {
			*cursor = 9;
			break;
		}
		*cursor = 9;
		cursor++;
		if (*cursor == 1) {
			cursor += 9;
			if (*cursor == 1)	break;
		}
		if (cursor > &maze[9][9]) {
			cursor -= 9;
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}

	return 0;
}