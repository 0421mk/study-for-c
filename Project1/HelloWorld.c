#include <stdio.h>

// getchar �Լ��� putchar �Լ��� Ȱ��
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
		printf("���ĺ��� �Է����ּ���.\n");
	}
	
	putchar(ch);

	// A 65 a 97
	return 0;
}