#include <stdio.h>

// 파일 위치 지시자 예제
int main() {
	FILE* fp;
	fopen_s(&fp, "text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fopen_s(&fp, "text.txt", "rt");
	
	/* SEEK_END test */
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	/* SEEK_SET test */
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	/* SEEK_CUR test */
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));
	
	fclose(fp);
	return 0;
}