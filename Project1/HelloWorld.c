#include <stdio.h>

// �迭�� ���ڿ� ���
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

// ���ڿ� ����� ���
/*
int main() {
	char input[100];
	char input2[100];
	int len = 0;

	// ���ܰ� ���� �� �����Ƿ� �Է½� sizeof(char) * ������ �� ������Ѵ�.
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

// �Է¹��� ������ �� ���� ū �ƽ�Ű�ڵ� ���� ��
int main() {
	char input[100];
	int len = 0;
	char max = 0;

	// ���ܰ� ���� �� �����Ƿ� �Է½� sizeof(char) * ������ �� ������Ѵ�.
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