#include <stdio.h>
int two(int n);
// ��� ����� ���� �� Ȯ���մϴ�.
int main() {
	int input;

	scanf_s("%d", &input);

	int result = 0;
	while (1) {
		result++;
		if (two(result) > input) {
			break;
		}
	}

	printf("%d", result - 1);
	
	return 0;
}

int two(int n) {
	int result = 1;
	for (int i = 0; i < n; i++) {
		result *= 2;
	}

	return result;
}