#include <stdio.h>

int main(void)
{
	long fpos;
	int i;

	/* 파일생성 */
	FILE * fp=fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	/* 파일개방 */
	fp=fopen("text.txt", "rt");

	for(i=0; i<4; i++)
	{
		putchar(fgetc(fp));
		fpos=ftell(fp);//현재 위치 저장
		fseek(fp, -1, SEEK_END);//뒤로 이동
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);//저장해놓은 위치 복원
	}
	fclose(fp);
	return 0;
}
