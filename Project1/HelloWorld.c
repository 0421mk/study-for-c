#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ������ �̿��ؼ� ���������� ���� ����
int main() {
	
	srand((int)time(NULL));
	int start = 1;
	int winner = 0;
	int draw = 0;
	int input;

	while(start > 0) {
		
		printf("������ 1, ������ 2, ���� 3: ");
		scanf_s("%d", &input);
		int number = rand() % 3 + 1;

		if (input == 1) {
			printf("����� ���� ����, ");
		}
		else if (input == 2) {
			printf("����� ���� ����, ");
		}
		else if (input == 3) {
			printf("����� �� ����, ");
		}

		if (number == 1) {
			printf("��ǻ�ʹ� ���� ����, ");
		}
		else if (number == 2) {
			printf("��ǻ�ʹ� ���� ����, ");
		}
		else if (number == 3) {
			printf("��ǻ�ʹ� �� ����, ");
		}

		if (input == number) {
			printf("�����ϴ�!\n");
			draw++;
		}
		else if (input == 1 && number == 2 || input == 2 && number == 3 || input == 3 && number == 1) {
			printf("����� �̰���ϴ�!\n");
			winner++;
		}
		else {
			printf("����� �����ϴ�!\n");
			start = -1;
		}

		printf("������ ��� : %d��, %d��\n", winner, draw);
	}

	return 0;
}