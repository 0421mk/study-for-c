#include <stdio.h>

typedef struct information {
	char name[40];
	char title[40];
	int page;
} Info;

// ����ü ������ �迭
// �����Ҵ����� �迭�� ���� [i]�� ���� ����

int main() {
	Info *info;
	info = (Info*)malloc(sizeof(Info)*3);
	
	printf("���� ���� �Է�\n");
	for (int i = 0; i < 3; i++) {
		printf("����: ");
		fgets(info[i].name, sizeof(info[i].name), stdin);
		info[i].name[strlen(info[i].name) - 1] = 0;

		printf("����: ");
		fgets(info[i].title, sizeof(info[i].title), stdin);
		info[i].title[strlen(info[i].title) - 1] = 0;

		printf("������ ��: ");
		scanf_s("%d", &info[i].page, sizeof(info[i].page));

		// getchar()�� \n�̸� �ݺ��� break; �� getchar()�� �а� break ��Ŵ
		while (getchar() != '\n');
	}
	
	printf("���� ���� ���\n");
	
	for (int i = 0; i < 3; i++) {
		printf("book %d\n", i + 1);
		printf("���� : %s\n", info[i].name);
		printf("���� : %s\n", info[i].title);
		printf("������ �� : %d\n", info[i].page);
	}

	free(info);

	return 0;
}