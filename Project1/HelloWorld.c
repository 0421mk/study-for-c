#include <stdio.h>

// ������ �Է¹޾� �迭 ���, ������� realloc���� ���� ����
int main() {
	int* ptr = (int*) malloc(sizeof(int) * 5);
	int size = 0;

	while (1) {
		scanf_s("%d", &ptr[size], sizeof(ptr));

		if (ptr[size] == -1) {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}

		size++;

		if (_msize(ptr) <= sizeof(int) * size) {
			(int*)realloc(ptr, _msize(ptr) + sizeof(int)*3);
			printf("_msize(ptr) : %d\n", _msize(ptr));
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", ptr[i]);
	}

	free(ptr);
	
	return 0;
}