#include <stdio.h>

int main()
{
	// 2�� 2X2, 4�� 4X4, 6�� 6X6���� ����ϴ� ������ ����
	/*
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % 2 != 0) {
				continue;
			}
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	*/

	// AZ + ZA == 99�� �����ϴ� ZA ã��
	int A = 0;
	int Z = 0;
	int AZ = 0;
	int ZA = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			A = i * 10;
			Z = j;
			AZ = A + Z;

			Z = j * 10;
			A = i;
			ZA = Z + A;

			if (AZ + ZA == 99) {
				printf("AZ = %d, ZA = %d\n", AZ, ZA);
			}
		}
	}
}