#include <stdio.h>

int main()
{
	int i = 0;
	int input = 0;
	int total = 0;
	while (i < 5) {

		scanf_s("%d", &input);

		if (input < 1) {
			printf("1 �̻��� ���� �Է����ּ���.\n");
			continue;
		}

		total += input;
		i++;
	}

	printf("%d", total);

	return 0;
}