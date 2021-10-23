#include <stdio.h>

// ���� ��ġ �����ڿ� ftell�� �̿��� ���� ����
int main() {
	FILE* fp;
	fopen_s(&fp, "text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fopen_s(&fp, "text.txt", "rt");
	
	printf("������ ũ�� : %ld\n", getFileSize(fp));
	
	fclose(fp);
	return 0;
}

long getFileSize(FILE* fp) {
	long fpos;
	long fsize;
	fpos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);

	fseek(fp, fpos, SEEK_SET);

	return fsize;
}