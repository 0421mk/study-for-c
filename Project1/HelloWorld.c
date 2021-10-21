#include <stdio.h>

// 배열 내 숫자의 총합 구하기
int main() {
	char input[100];

	fputs("문자열을 입력해주세요: ", stdout);
	fgets(input, sizeof(input), stdin);

	int len = strlen(input);
	input[len - 1] = 0;
	int total = 0;

	for (int i = 0; i < len; i++) {
		int ascii = input[i];
		if (ascii >= 48 && ascii <= 57) {
			total += ascii - 48;
		}
	}

	printf("총합은 : %d 입니다.\n", total);
	
	return 0;
}