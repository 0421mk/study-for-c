#include <stdio.h>

// 모든 경우의 수를 다 확인합니다.
int main() {
	int input;
	scanf_s("%d", &input);

	int hour = input / 3600;
	int minute = input % 3600 / 60;
	int second = (input % 3600) % 60;

	printf("h:%d, m:%d, s:%d", hour, minute, second);
	
	return 0;
}
