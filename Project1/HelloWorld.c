#include <stdio.h>

// 2차원 배열의 활용 : 구구단 2, 3, 4단
/*
int main() {
	int arr[3][9];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i + 2) * (j + 1);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			printf("arr[%d][%d] = %d ", i, j, arr[i][j]);
		}
		printf("\n");
	}
}
*/

// 가로형 배열과 세로형 배열의 값 바꾸기
/*
int main() {
	int arrA[2][4] = { { 1,2,3,4 }, { 5,6,7,8 } };
	int arrB[4][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			arrB[j][i] = arrA[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d", arrB[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

// 2차원 배열로 성적관리 프로그램 구현

int main() {
	int input;
	int arr[5][5];
	int reverse[4][4];
	int total = 0;
	int entire = 0;

	int total2 = 0;

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				scanf_s("%d", &input);

				arr[i][j] = input;
				total += input;
				reverse[j][i] = arr[i][j];

				if (j == 3) {
					arr[i][4] = total;
				}
			}
			entire += total;
			total = 0;
		}

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {

				total2 += reverse[i][j];

				if (j == 3) {
					arr[4][i] = total2;
				}
			}
			total2 = 0;
		}

		arr[4][4] = entire;

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				printf("arr[%d][%d] = %d ", i, j, arr[i][j]);
			}
			printf("\n");
		}

	return 0;
}