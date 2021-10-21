#include <stdio.h>

// getchar 함수와 putchar 함수의 활용
int main() {
	int ch;

	ch = getchar();

	if (ch >= 65 && ch <= 122) {
		if (ch >= 65 && ch < 97) {
			ch += 32;
		}
		else {
			ch -= 32;
		}
	}
	else {
		printf("알파벳만 입력해주세요.\n");
	}
	
	putchar(ch);

	// A 65 a 97
	return 0;
}