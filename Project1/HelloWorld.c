#include <stdio.h>

// ��� ����� ���� �� Ȯ���մϴ�.
int main() {
	int cream;
	int shrimp;
	int cola;

	int price = 3500;

	for (cream = 500; cream < price; cream += 500) {
		printf("ũ���� : %d\n", cream);
		for (shrimp = 700; shrimp < price; shrimp += 700) {
			printf("���� : %d\n", shrimp);
			for (cola = 400; cola < price; cola += 400) {
				printf("�ݶ� : %d\n", cola);
				if (cream + shrimp + cola == price) {
					printf("ũ���� %d, ����� %d, �ݶ� %d��", cream / 500, shrimp / 700, cola / 400);
				}
				else {
					printf("�ݾ��� ���� �ʽ��ϴ�.");
					continue;
				}
			}
		}
	}

	return 0;
}