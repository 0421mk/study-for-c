#include <stdio.h>

typedef struct person {
	char name[10];
	char number[20];
} Person;

// 전화번호 관리 프로그램 구현
int main() {
	Person people[100];

	int command;
	int size = 0;

	while (1) {
		printf("명령어 : ");
		command = getchar();
		while (getchar() != '\n');

		if (command == '1') {
			printf("=== Insert ===\n");
			printf("이름 : ");
			scanf_s("%s", people[size].name, sizeof(10));
			while (getchar() != '\n');
			printf("전화번호 : ");
			scanf_s("%s", people[size].number, sizeof(20));
			while (getchar() != '\n');

			size++;
			printf("연락처[%d]\n", size);
		}
		else if (command == '2') {
			printf("=== Delete ===\n");
			char input[10];
			int index = -1;
			printf("이름 : ");
			scanf_s("%s", &input, sizeof(10));
			while (getchar() != '\n');
			
			for (int i = 0; i < size; i++) {
				if (!strcmp(input, people[i].name)) {
					index = i;
				}
			}

			if (index == -1) {
				printf("존재하지 않는 이름입니다.\n");
			}
			else {
				for (int i = index + 1; i < size; i++) {
					people[i - 1] = people[i];
				}
				size--;

				printf("%d번 이름을 삭제하였습니다.\n", index + 1);
				printf("연락처[%d]\n", size);
			}
		}
		else if (command == '3') {
			printf("=== Search ===\n");
			char input[10];
			int index = -1;
			printf("이름 : ");
			scanf_s("%s", &input, sizeof(10));
			while (getchar() != '\n');
			
			for (int i = 0; i < size; i++) {
				if (!strcmp(input, people[i].name)) {
					index = i;
				}
			}

			if (index == -1) {
				printf("존재하지 않는 이름입니다.\n");
			}
			else {
				printf("No : %d\n", index + 1);
				printf("이름 : %s\n", people[index].name);
				printf("전화번호 : %s\n", people[index].number);
				printf("연락처[%d]\n", size);
			}
		}
		else if (command == '4') {
			printf("=== Print All ===\n");
			if (size == 0) {
				printf("정보가 없습니다.\n");
			}
			else {
				for (int i = 0; i < size; i++) {
					printf("No : %d\n", i + 1);
					printf("이름 : %s\n", people[i].name);
					printf("전화번호 : %s\n", people[i].number);
					printf("연락처[%d]\n", size);
				}
			}
		}
		else if (command == '5') {
			printf("시스템을 종료합니다.\n");
			break;
		}
		else {
			printf("존재하지 않는 명령어입니다.\n");
		}
	}

	return 0;
}
