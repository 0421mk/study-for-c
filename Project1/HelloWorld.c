#include <stdio.h>

// �迭 �� ������ ���� ���ϱ�
int main() {
	char input[100];

	fputs("���ڿ��� �Է����ּ���: ", stdout);
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

	printf("������ : %d �Դϴ�.\n", total);
	
	return 0;
}