#include <stdio.h>

// ����ü ���� Ȱ�� ����
struct employee {
	char name[10];
	char personNumber[20];
	int payment;
};

int main() {

	struct employee em;

	scanf_s("%s", em.name, sizeof(em.name));
	scanf_s("%s", em.personNumber, sizeof(em.personNumber));
	scanf_s("%d", &(em.payment));

	printf("�̸� : %s\n", em.name);
	printf("�ֹε�Ϲ�ȣ : %s\n", em.personNumber);
	printf("�޿� : %d\n", em.payment);

	return 0;
}