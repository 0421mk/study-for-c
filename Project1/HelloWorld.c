#include <stdio.h>

// fscanf �Լ��� �̿��� A�� P�� �����ϴ� �ܾ��� �� ����

int main() {
	FILE* fp;
	fopen_s(&fp, "wordcnt.txt", "rt");

	char str[10];
	int Acnt = 0;
	int Pcnt = 0;

	while (feof(fp) != 1) {
		fscanf_s(fp, "%s", str, sizeof(str));

		if (str[0] == 'A') {
			Acnt++;
		}
		else if (str[0] == 'P') {
			Pcnt++;
		}

		printf("%s, ��ġ : %d, ������ �� : %d\n", str, ftell(fp), feof(fp));
	}

	printf("A�� �����ϴ� �ܾ��� ��: %d\n", Acnt);
	printf("P�� �����ϴ� �ܾ��� ��: %d\n", Pcnt);

	fclose(fp);

	return 0;
}
