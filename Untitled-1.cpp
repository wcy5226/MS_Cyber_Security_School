#include <stdio.h>
#include <windows.h> // Sleep, system("cls") 사용

void draw_man(int x) {
    for (int i = 0; i < x; i++) printf(" ");
    printf(" O\n");
    for (int i = 0; i < x; i++) printf(" ");
    printf("/|\\\n");
    for (int i = 0; i < x; i++) printf(" ");
    printf("/ \\\n");
}

int main() {
    int i;
    for (i = 0; i < 30; i++) {
        system("cls");      // 화면 지우기
        draw_man(i);        // x만큼 오른쪽으로 이동
        Sleep(100);         // 0.1초 대기
    }
    return 0;
}