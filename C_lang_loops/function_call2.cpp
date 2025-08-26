// 한변의 길이가 x인 정n각형의 넓이를 구하는 함수
#include <stdio.h>
#include <conio.h>
#include <math.h>

// 함수 원형 선언
float area(int n, float x);

int main() {
    int n;
    float x;

    while (1)
    {
        printf("정n각형의 변의 개수 n을 입력하세요: ");
        scanf_s("%d", &n);
        printf("한변의 길이 x를 입력하세요: ");
        scanf_s("%f", &x);
        printf("정%d각형의 넓이는 %.4f입니다.\n\n", n, area(n, x)); //함수 호출
    }
    
}
// 한변의 길이가 x인 정n각형의 넓이를 구하는 함수를 정의
float area(int n, float x) {
    float result;
    result = (n * x * x) / (4 * tan(3.141592 * 1.0 / n));
    return result;
}