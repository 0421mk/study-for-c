#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 난수를 이용해서 가위바위보 게임 구현
int main() {
	
	srand((int)time(NULL));
	int start = 1;
	int winner = 0;
	int draw = 0;
	int input;

	while(start > 0) {
		
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf_s("%d", &input);
		int number = rand() % 3 + 1;

		if (input == 1) {
			printf("당신은 바위 선택, ");
		}
		else if (input == 2) {
			printf("당신은 가위 선택, ");
		}
		else if (input == 3) {
			printf("당신은 보 선택, ");
		}

		if (number == 1) {
			printf("컴퓨터는 바위 선택, ");
		}
		else if (number == 2) {
			printf("컴퓨터는 가위 선택, ");
		}
		else if (number == 3) {
			printf("컴퓨터는 보 선택, ");
		}

		if (input == number) {
			printf("비겼습니다!\n");
			draw++;
		}
		else if (input == 1 && number == 2 || input == 2 && number == 3 || input == 3 && number == 1) {
			printf("당신이 이겼습니다!\n");
			winner++;
		}
		else {
			printf("당신이 졌습니다!\n");
			start = -1;
		}

		printf("게임의 결과 : %d승, %d무\n", winner, draw);
	}

	return 0;
}