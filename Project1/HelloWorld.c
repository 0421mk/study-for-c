#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// srand�� time�� �̿��� ���� ���
int main() {
	srand((int)time(NULL));
	for (int i = 0; i < 2; i++) {
		printf("�ֻ��� %d�� ��� %d\n", i + 1, rand()%6 + 1);
	}

	return 0;
}