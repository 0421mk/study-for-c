#include <stdio.h>

// ����ü ���� Ȱ�� ����2
struct employee {
	char name[10];
	char personNumber[20];
	int payment;
};

int main() {

	struct employee em[3];

	for(int i = 0; i < 3; i++) {
		printf("�̸� : ");
		scanf_s("%s", em[i].name, sizeof(em[i].name));
		printf("�ֹε�Ϲ�ȣ : ");
		scanf_s("%s", em[i].personNumber, sizeof(em[i].personNumber));
		printf("�޿� : ");
		scanf_s("%d", &(em[i].payment));
	}

	for (int i = 0; i < 3; i++) {
		printf("�̸� : %s\n", em[i].name);
		printf("�ֹε�Ϲ�ȣ : %s\n", em[i].personNumber);
		printf("�޿� : %d\n", em[i].payment);
	}

	return 0;
}