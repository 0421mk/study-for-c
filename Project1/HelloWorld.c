#include <stdio.h>

int main() {
	char input[7];
	int size = 7;
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &input[i]);
	}

	for (int j = 0; j < 7; j++) {
		for (int i = size - 1; i > j; i--) {
			if (input[i] > input[i - 1]) {
				int temp = input[i];
				input[i] = input[i + -1];
				input[i + -1] = temp;
			}
		}
	}
	
	for (int i = 0; i < 7; i++) {
		printf("%d ", input[i]);
	}
	
	return 0;
}
