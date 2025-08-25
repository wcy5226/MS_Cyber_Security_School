#include <stdio.h>

int main() {
    int age, score;
    printf("Your age : "); scanf("%d", &age);
    printf("Your score : "); scanf("%d", &score);

    printf("Age : %d\n", age);
    printf("Score : %d\n", score);

    printf("Press Enter to exit...");
    getchar(); // 이전 입력 버퍼의 개행 문자 제거
    getchar(); // 실제 Enter 입력 대기
    return 0;
}