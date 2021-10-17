#include <stdio.h>

// 정수의 합, 최댓값, 최솟값 배열로 구하기
int main() {
	int arr[5];
	int input;
	int max = 0;
	int min = 0;
	int total = 0;

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &input);
		arr[i] = input;

		if (max < arr[i]) {
			max = arr[i];
		}

		if (i == 0) {
			min = arr[i];
		}
		else {
			if (min > arr[i]) {
				min = arr[i];
			}
		}
		
		total += arr[i];
	}

	printf("최댓값 : %d, 최솟값 : %d, 정수의 합 : %d", max, min, total);

	return 0;
}