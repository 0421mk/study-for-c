#include <stdio.h>

// 두개의 파일 완전히 일치하는지 여부 구현

int main() {
	FILE* fp;
	fopen_s(&fp, "file1.txt", "rt");

	FILE* fp2;
	fopen_s(&fp2, "file2.txt", "rt");

	int check = 0;

	while (feof(fp) != 1) {
		if (fgetc(fp) != fgetc(fp2)) {
			check = -1;
		}
	}

	if (check == 0) {
		printf("두 개의 파일은 완전히 일치합니다.");
	}
	else {
		printf("두 개의 파일은 완전히 일치하지 않습니다.");
	}

	fclose(fp);
	fclose(fp2);

	return 0;
}
