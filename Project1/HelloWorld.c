#include <stdio.h>
int recursive(int n);
// 모든 경우의 수를 다 확인합니다.
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