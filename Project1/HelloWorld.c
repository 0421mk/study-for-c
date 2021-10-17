#include <stdio.h>

// ������ �׽�Ʈ ����
/*
int main() {
	
	int arr[5] = { 1,2,3,4,5 };

	int* ptr = arr;
	for (int i = 0; i < 5; i++) {
		*ptr += 2;
		// ptr�� �ּҰ��� ���� �ӽú����� �̿�
		ptr++;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
*/

/*
int main() {
	int arr[5] = { 1,2,3,4,5 };

	int* ptr = arr;
	for (int i = 0; i < 5; i++) {
		// ���� �ּҷ� �����ϴ� ���̹Ƿ� ���� �ٲ�ϴ�.
		*(ptr + i) += 2;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
*/

/*
int main() {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr + 4;
	int total = 0;

	for (int i = 0; i < 5; i++) {
		total += *ptr;
		ptr--;
	}

	printf("%d", total);

	return 0;
}
*/

// �����͸� Ȱ���Ͽ� �������� ����
int main() {
	int arr[6] = { 1,2,3,4,5,6 };

	int* ptr1 = &arr[0];
	int* ptr2 = &arr[5];
	int temp;

	for (int i = 0; i < 3; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;

		ptr1++;
		ptr2--;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}