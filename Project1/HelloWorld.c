#include <stdio.h>
int recursive(int n);
// ��� ����� ���� �� Ȯ���մϴ�.
int main() {
	int input;

	scanf_s("%d", &input);

	printf("%d", recursive(input));
	
	return 0;
}

int recursive(int n) {

	if (n == 1) {
		return 1;
	}

	return n * recursive(n-1);
}