#include <stdio.h>
#include <string.h> // strlen 함수 사용을 위한 헤더 파일 포함

int main(){
    char *str = "Hello, World!";
    printf("%s\n", str);
    printf("문자열의 길이: %zu\n", strlen(str)); // 문자열의 길이 출력

    char str2[50]; // 충분히 큰 배열 선언
    strcpy(str2, "Hello, World!"); // str의 내용을 str2로 복사
    printf("%s\n", str2);
    printf("문자열의 길이: %zu\n", strlen(str2)); // 문자열의 길이 출력
}