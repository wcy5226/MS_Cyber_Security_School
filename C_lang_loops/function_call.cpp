//함수 정의하여 사용하는 예제
/*
// 전달인자와 반환값이 있는 함수
int add(int a, int b) { // int형 매개변수 2개를 받아 int형 값을 반환
    return a + b;       // a와 b의 합을 반환
}

// 전달인자와 반환값이 없는 함수
void printHello() {    // 매개변수와 반환값이 없음
    printf("Hello\n"); // "Hello" 출력
}

// 전달인자가 있고 반환값이 없는 함수
void printSum(int a, int b) { // int형 매개변수 2개를 받음
    printf("%d\n", a + b);    // a와 b의 합을 출력
}

// 전달인자가 없고 반환값이 있는 함수
int getFive() {               // 매개변수는 없고 int형 값을 반환
    return 5;                 // 5를 반환
}

함수는 main 함수 외부에 정의하며,
main 함수 내부에서 호출하여 사용합니다.
컴파일러 특성상 main 함수보다 앞에 정의된 함수만 호출할 수 있으므로,
함수 정의를 main 함수보다 앞에 작성해야 합니다.
또는 함수 원형(prototype)을 main 함수보다 앞에 선언하고,
함수 정의는 main 함수 뒤에 작성할 수도 있습니다.

예시
void checkcase(); // 함수 원형 선언 <이 때 컴파일러가 함수의 존재를 알게 됨>
int main() {
    while (1)
    {
        checkcase(); //함수 호출     
    }
}
void checkcase(){ // 함수 정의
    // 함수 내용
}

이렇게 함수 원형을 선언하면,
main 함수보다 뒤에 정의된 함수를 호출할 수 있습니다.

*/

#include <stdio.h>
#include <conio.h>

void checkcase(){

    char ch;
    printf("문자 하나를 입력하세요: ");
    ch = getche(); //키보드로부터 문자 하나를 입력받음
    //입력받은 key 값을 매개변수로 전달하고 대문자/소문자/숫자/특수문자 종류를 구분하여 출력
    printf("\n");
    if(ch>='A'&&ch<='Z'){
        printf("대문자입니다.\n");
    } else if(ch>='a'&&ch<='z'){
        printf("소문자입니다.\n");
    } else if(ch>='0'&&ch<='9'){
        printf("숫자입니다.\n");
    } else if(ch>='!' && ch<='~'){
        printf("특수문자입니다.\n");
    } else {
        printf("기타문자입니다.\n");
    }
    printf("\n");
}

int main() {
    while (1)
    {
        checkcase(); //함수 호출     
    }
}