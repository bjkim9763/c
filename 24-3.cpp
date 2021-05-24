#include <stdio.h>
//문제 3
int main(void) {
    FILE* fp = fopen("mystory.txt", "r");//파일 열기 읽기 위한 r
    char str[100];//배열 선언

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf(str);
    }//null값이 나올때 까지 파일의 내용을 str에 입력
    // str을 출력

    fclose(fp);//스트림 종료

    return 0;
}