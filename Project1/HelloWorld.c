#include <stdio.h>

// fscanf 함수를 이용해 A와 P로 시작하는 단어의 수 구현

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

		printf("%s, 위치 : %d, 파일의 끝 : %d\n", str, ftell(fp), feof(fp));
	}

	printf("A로 시작하는 단어의 수: %d\n", Acnt);
	printf("P로 시작하는 단어의 수: %d\n", Pcnt);

	fclose(fp);

	return 0;
}
