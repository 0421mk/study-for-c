#include <stdio.h>

// 배열로 문자열 출력
/*
int main() {
	char str[] = { 'G', 'o', 'o', 'd', ' ', 't', 'i','m','e' };
	
	int arrLen = sizeof(str) / sizeof(char);

	for (int i = 0; i < arrLen; i++) {
		printf("%c\n", str[i]);
	}

	return 0;
}
*/

// 문자열 뒤집어서 출력
/*
int main() {
	char input[100];
	char input2[100];
	int len = 0;

	// 예외가 생길 수 있으므로 입력시 sizeof(char) * 사이즈 꼭 해줘야한다.
	scanf_s("%s", input, sizeof(char)*100);
	
	while (input[len] != 0) {
		len++;
	}

	int j = 0;

	for (int i = len - 1; i >= 0; i--) {
		input2[j] = input[i];
		j++;
	}

	input2[len] = 0;
	

	for (int i = 0; i < len; i++) {
		printf("%c", input2[i]);
	}

	return 0;
}
*/

// 입력받은 영문자 중 가장 큰 아스키코드 정수 값
int main() {
	char input[100];
	int len = 0;
	char max = 0;

	// 예외가 생길 수 있으므로 입력시 sizeof(char) * 사이즈 꼭 해줘야한다.
	scanf_s("%s", input, sizeof(char) * 100);

	while (input[len] != 0) {
		len++;
	}

	for (int i = 0; i < len; i++) {
		if (max < input[i]) {
			max = input[i];
		}
	}
	
	printf("%c", max);

	return 0;
}