#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ������ �̿��� strike, ball ���� ����
int main() {
	
	srand((int)time(NULL));
	
	int com1 = rand() % 9 + 1;
	int com2 = rand() % 9 + 1;
	int com3 = rand() % 9 + 1;

	int com[3] = { com1, com2, com3 };

	int input1, input2, input3;

	int i = 1;
	int game = 1;
	while (game > 0) {
		int strike = 0;
		int ball = 0;

		printf("3���� ���� ���� : ");
		scanf_s("%d", &input1);
		scanf_s("%d", &input2);
		scanf_s("%d", &input3);

		int input[3] = { input1, input2, input3 };

		for (int j = 0; j < 3; j++) {
			for (int i = 0; i < 3; i++) {
				if (j == i) {
					if (com[i] == input[j]) {
						strike++;
					}
				}
				else {
					if (com[i] == input[j]) {
						ball++;
					}
				}
			}
		}

		if (strike == 3) {
			game = -1;
		}

		printf("%d��° ���� ���: %dstrike, %dball!!\n", i, strike, ball);
	}
	
	

	return 0;
}