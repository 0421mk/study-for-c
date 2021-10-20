#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 난수를 이용해 strike, ball 게임 구현
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

		printf("3개의 숫자 선택 : ");
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

		printf("%d번째 도전 결과: %dstrike, %dball!!\n", i, strike, ball);
	}
	
	

	return 0;
}