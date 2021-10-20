#include <stdio.h>

int main() {
	int arr[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};

	int result[4][4];

	for (int j = 0; j < 4; j++) {
		for (int i = 3; i >= 0; i--) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int j = 3; j >= 0; j--) {
		for (int i = 3; i >= 0; i--) {
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	printf("\n");

	for (int j = 3; j >= 0; j--) {
		for (int i = 0; i < 4; i++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}