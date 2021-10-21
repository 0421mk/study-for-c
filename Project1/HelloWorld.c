#include <stdio.h>

// 파일 출력 구현하기 Debug 폴더에 mystory.txt 파일
int main() {
	FILE* fp;
	fopen_s(&fp, "mystory.txt", "wt");
	
	fputs("#이름: 최윤우 \n", fp);
	fputs("#주민번호: 960421-1495888 \n", fp);
	fputs("#전화번호: 010-4446-5052 \n", fp);

	fclose(fp);

	return 0;
}