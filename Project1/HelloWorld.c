#include <stdio.h>

// 홀수, 짝수 출력 
/*
int main() {
	int input;
	int arr1[10];
	int arr2[10];
	int j = 0;
	int k = 0;
	int arrLen = 0;

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
	
	printf("홀수 출력 : ");
	while (arrLen < j) {
		if (arrLen == j - 1) {
			printf("%d", arr1[arrLen]);
		}
		else {
			printf("%d, ", arr1[arrLen]);
		}
		arrLen++;
	}

	printf("\n");
	arrLen = 0;

	printf("짝수 출력 : ");
	while (arrLen < k) {
		if (arrLen == k - 1) {
			printf("%d", arr2[arrLen]);
		}
		else {
			printf("%d, ", arr2[arrLen]);
		}
		arrLen++;
	}

	return 0;
}
*/

// 10진수 형태로 입력받아서 2진수로 출력
int main() {
	int input = 0;
	int arr[100];
	int i = 0;
	scanf_s("%d", &input);

	while (input != 0) {
		if (input % 2 == 0) {
			input /= 2;
			arr[i] = 0;
		}
		else if(input % 2 == 1) {
			input -= 1;
			input /= 2;
			arr[i] = 1;
		}

		i++;
	}

	for (int j = i - 1; j >= 0; j--) {
		printf("%d", arr[j]);
	}

	return 0;
}
