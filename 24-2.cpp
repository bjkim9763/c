#include <stdio.h>
//문제 2
int main(void) {
    FILE* fp = fopen("mystory.txt", "a");//파일 열기 끝에 덧붙여 쓰기 위해 a

    fputs("#즐겨먹는 음식: 짬뽕, 탕수육\n", fp);//내용추가
    fputs("#취미: 축구\n", fp);//내용 추가
    fclose(fp);//스트림 종료

    return 0;
}