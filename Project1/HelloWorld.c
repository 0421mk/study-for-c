#include <stdio.h>

int main() {
	char input[100];
	int size = 0;
	scanf_s("%s", &input, 100);
	int check = 0;

	while (input[size] != 0) {
		size++;
	}

	int start = 0;
	int center = size / 2;
	int end = size;

	if (size % 2 == 1) {
		center++;
	}

	for (int i = 0; i < center; i++) {
		if (input[start] == input[end - 1]) {
			check = 1;
		}
		else {
			check = 0;
			break;
		}

		start++;
		end--;
	}

	if (check == 1) {
		printf("회문입니다.");
	}
	else {
		printf("회문이 아닙니다.");
	}

	return 0;
}
