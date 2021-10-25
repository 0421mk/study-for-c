#include <stdio.h>

typedef struct person {
	char name[10];
	char number[20];
} Person;

// ��ȭ��ȣ ���� ���α׷� ����
int main() {
	Person people[100];

	int command;
	int size = 0;

	while (1) {
		printf("��ɾ� : ");
		command = getchar();
		while (getchar() != '\n');

		if (command == '1') {
			printf("=== Insert ===\n");
			printf("�̸� : ");
			scanf_s("%s", people[size].name, sizeof(10));
			while (getchar() != '\n');
			printf("��ȭ��ȣ : ");
			scanf_s("%s", people[size].number, sizeof(20));
			while (getchar() != '\n');

			size++;
			printf("����ó[%d]\n", size);
		}
		else if (command == '2') {
			printf("=== Delete ===\n");
			char input[10];
			int index = -1;
			printf("�̸� : ");
			scanf_s("%s", &input, sizeof(10));
			while (getchar() != '\n');
			
			for (int i = 0; i < size; i++) {
				if (!strcmp(input, people[i].name)) {
					index = i;
				}
			}

			if (index == -1) {
				printf("�������� �ʴ� �̸��Դϴ�.\n");
			}
			else {
				for (int i = index + 1; i < size; i++) {
					people[i - 1] = people[i];
				}
				size--;

				printf("%d�� �̸��� �����Ͽ����ϴ�.\n", index + 1);
				printf("����ó[%d]\n", size);
			}
		}
		else if (command == '3') {
			printf("=== Search ===\n");
			char input[10];
			int index = -1;
			printf("�̸� : ");
			scanf_s("%s", &input, sizeof(10));
			while (getchar() != '\n');
			
			for (int i = 0; i < size; i++) {
				if (!strcmp(input, people[i].name)) {
					index = i;
				}
			}

			if (index == -1) {
				printf("�������� �ʴ� �̸��Դϴ�.\n");
			}
			else {
				printf("No : %d\n", index + 1);
				printf("�̸� : %s\n", people[index].name);
				printf("��ȭ��ȣ : %s\n", people[index].number);
				printf("����ó[%d]\n", size);
			}
		}
		else if (command == '4') {
			printf("=== Print All ===\n");
			if (size == 0) {
				printf("������ �����ϴ�.\n");
			}
			else {
				for (int i = 0; i < size; i++) {
					printf("No : %d\n", i + 1);
					printf("�̸� : %s\n", people[i].name);
					printf("��ȭ��ȣ : %s\n", people[i].number);
					printf("����ó[%d]\n", size);
				}
			}
		}
		else if (command == '5') {
			printf("�ý����� �����մϴ�.\n");
			break;
		}
		else {
			printf("�������� �ʴ� ��ɾ��Դϴ�.\n");
		}
	}

	return 0;
}
