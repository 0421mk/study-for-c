#include <stdio.h>
int primeNumber(int i);
// ��� ����� ���� �� Ȯ���մϴ�.
int main() {
	int count = 0;
	int i = 1;
	while(count != 10) {
		
		if (primeNumber(i) == 1) {
			printf("%d ", i);
			count++;
		}

		i++;
	}

	return 0;
}

int primeNumber(int i) {
	int j = 1;
	int count = 0;
	for (int j = 1; j <= i; j++) {
		if (i % j == 0) {
			count++;
		}
	}

	if (count == 2) {
		return 1;
	}

	return 0;
}