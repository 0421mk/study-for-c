#include <stdio.h>

// �ΰ��� ���� ������ ��ġ�ϴ��� ���� ����

int main() {
	FILE* fp;
	fopen_s(&fp, "file1.txt", "rt");

	FILE* fp2;
	fopen_s(&fp2, "file2.txt", "rt");

	int check = 0;

	while (feof(fp) != 1) {
		if (fgetc(fp) != fgetc(fp2)) {
			check = -1;
		}
	}

	if (check == 0) {
		printf("�� ���� ������ ������ ��ġ�մϴ�.");
	}
	else {
		printf("�� ���� ������ ������ ��ġ���� �ʽ��ϴ�.");
	}

	fclose(fp);
	fclose(fp2);

	return 0;
}
