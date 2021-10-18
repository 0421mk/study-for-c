#include <stdio.h>

// 배열에서 홀수면 앞, 짝수면 거꾸로 뒤로 출력
int main() {
	int input;
	int arr1[10];
	int arr2[10];
	int result[10];
	int j = 0;
	int k = 0;
	int arrLen = 0;
	int r = 0;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &input);

		if (input % 2 == 1) {
			arr1[j] = input;
			j++;
		}
		else {
			arr2[k] = input;
			k++;
		}
	}

	while (arrLen < j) {
		result[r] = arr1[arrLen];
		arrLen++;
		r++;
	}

	printf("\n");
	arrLen = k - 1;

	while (arrLen >= 0) {
		result[r] = arr2[arrLen];
		r++;
		arrLen--;
	}

	printf("배열 요소의 출력 : ");

	for (int i = 0; i < r; i++) {
		printf("%d ", result[i]);
	}

	return 0;
}
