#include <stdio.h>

// ���ڿ��� �Է¹޾� �ܾ �������� �����
int main() {
	char* ptr = (char*)malloc(sizeof(char) * 30);
	gets_s(ptr, 30);

	ptr[strlen(ptr)] = 0;

	for (int i = strlen(ptr); i >= 0; i--) {
		if (ptr[i] == ' ') {
			// ���� ���� ���ں��� ������ ���ڿ��� 0�϶����� ���
			printf("%s ", &ptr[i+1]);
			// ������ ���ڿ��� ������ �����
			// ����� ���ڿ��� ������ �Ѵ�
			ptr[i] = 0;
		}
	}

	printf("%s", &ptr[0]);
	
	return 0;
}