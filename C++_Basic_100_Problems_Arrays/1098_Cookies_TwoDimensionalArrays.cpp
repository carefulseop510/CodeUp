#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

int main() {
	int w, h, n, l, d, x, y;
	scanf("%d %d", &h, &w);

	int **a = (int**)malloc(sizeof(int*)* h);
	for (int i = 0; i < h; i++) {
		a[i] = (int*)malloc(sizeof(int*) * w);
	}
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			a[i][j] = 0;
		}
	}

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d == 0) {
			for (int j = 0; j < l; j++) {
				a[x - 1][y - 1 + j] = 1;
			}
		}
		if (d == 1) {
			for (int k = 0; k < l; k++) {
				a[x - 1 + k][y - 1] = 1;
			}
		}
	}
	
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < h; i++) {
		free(a[i]);
	}
	free(a);

	return 0;
}