#include <stdio.h>
//문제 1
int main(void) {
    FILE* fp = fopen("mystory.txt", "wt");//파일 생성

    fputs("#이름: 윤성우\n", fp);//파일에 내용입력
    fputs("#주민번호: 900208-1012589\n", fp);//파일에 내용입력
    fputs("#전화번호: 010-1111-2222\n", fp);//파일에 내용입력
    fclose(fp);//스트림 종료

    return 0;
}