#include <stdio.h>

typedef struct information {
	char name[40];
	char title[40];
	int page;
} Info;

// ����ü �迭�� ���� �Է¹ް� ����ϱ�
// ���๮�� �Է¹޴°��� ����Ʈ

int main() {
	Info arr[3];
	int number;
	
	printf("���� ���� �Է�\n");
	for (int i = 0; i < 3; i++) {
		printf("����: ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		arr[i].name[strlen(arr[i].name) - 1] = 0;

		printf("����: ");
		fgets(arr[i].title, sizeof(arr[i].title), stdin);
		arr[i].title[strlen(arr[i].title) - 1] = 0;

		printf("������ ��: ");
		scanf_s("%d", &arr[i].page, sizeof(arr[i].page));

		// getchar()�� \n�̸� �ݺ��� break; �� getchar()�� �а� break ��Ŵ
		while (getchar() != '\n');
	}
	
	printf("���� ���� ���\n");
	
	for (int i = 0; i < 3; i++) {
		printf("book %d\n", i + 1);
		printf("���� : %s\n", arr[i].name);
		printf("���� : %s\n", arr[i].title);
		printf("������ �� : %d\n", arr[i].page);
	}

	return 0;
}