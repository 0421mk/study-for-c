#include <stdio.h>

// ���� ��� �����ϱ� Debug ������ mystory.txt ����
int main() {
	FILE* fp;
	fopen_s(&fp, "mystory.txt", "wt");
	
	fputs("#�̸�: ������ \n", fp);
	fputs("#�ֹι�ȣ: 960421-1495888 \n", fp);
	fputs("#��ȭ��ȣ: 010-4446-5052 \n", fp);

	fclose(fp);

	return 0;
}