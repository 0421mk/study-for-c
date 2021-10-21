#include <stdio.h>
#include <string.h>

// ������ ��ġ return
int getIndexByStr(char* str) {
	int index = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			index = i;
		}
	}

	return index;
}

// �̸� ��
int compareName(char* str1, char* str2, int index) {
	int result = 0;
	if (!strncmp(str1, str2, index)) {
		result = 1;
	}

	return result;
}

// ���� ��
int compareAge(char* str1, char* str2) {
	int result = 0;
	int index1 = getIndexByStr(str1);
	int index2 = getIndexByStr(str2);

	int age1 = atoi(&str1[index1 + 1]);
	int age2 = atoi(&str2[index2 + 1]);

	if (age1 == age2) {
		result = 1;
	}

	return result;
}
// ������� �̸��� ���̸� �Է¹޾� �� �۾�
int main() {
	char str1[20];
	char str2[20];

	fputs("ù��° ����ڸ� �Է����ּ���.", stdout);
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	int index1 = getIndexByStr(str1);

	fputs("�ι�° ����ڸ� �Է����ּ���.", stdout);
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;
	int index2 = getIndexByStr(str2);

	if (compareName(str1, str2, index1)) {
		printf("�̸��� �����ϴ�.\n");
	}
	else {
		printf("�̸��� ���� �ʽ��ϴ�.\n");
	}

	if (compareAge(str1, str2)) {
		printf("���̰� �����մϴ�.\n");
	}
	else {
		printf("���̰� �������� �ʽ��ϴ�.\n");
	}

	return 0;
}