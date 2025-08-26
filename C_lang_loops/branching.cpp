#include <stdio.h>
#include <conio.h>
#include <math.h>

/*
1)삼항연산자
조건식 ? 참일때의 값 : 거짓일때의 값
예시)
int a = 10, b = 20;
int max = (a > b) ? a : b; // max에는 20이 저장됨

2)switch문
switch(표현식){
    case 상수표현식1:
        // 표현식의 값이 상수표현식1과 같을 때 실행되는 코드
        break; // break문은 선택사항이며, 없으면 다음 case로 계속 진행됨
    case 상수표현식2:
        // 표현식의 값이 상수표현식2와 같을 때 실행되는 코드
        break;
    ...
    default:
        // 어떤 case와도 일치하지 않을 때 실행되는 코드
        break;
}
표현식의 결과는 정수형 또는 열거형이어야 하며, 실수형이나 문자열은 사용할 수 없음
예시)
int day = 3;
switch (day) {
    case 1:
        printf("월요일\n");
        break;
    case 2:
        printf("화요일\n");
        break;
    case 3:
        printf("수요일\n");
        break;
    case 4:
        printf("목요일\n");
        break;
    case 5:
        printf("금요일\n");
        break;
    case 6:
        printf("토요일\n");
        break;
    case 7:
        printf("일요일\n");
        break;
    default:
        printf("잘못된 요일입니다.\n");
        break;
}


*/

/*
    conio.h
    이 헤더는 콘솔 입출력에 관련된 함수들을 제공
    getch() : 키보드로부터 문자를 입력받는 함수로, 입력된 문자를 화면에 표시하지 않음
    getche() : 키보드로부터 문자를 입력받는 함수로, 입력된 문자를 화면에 표시함
    getchar() : 키보드로부터 문자를 입력받는 함수로, 입력된 문자를 화면에 표시함
    putch() : 문자를 화면에 출력하는 함수
    putchar() : 문자를 화면에 출력하는 함수
    clrscr() : 콘솔 화면을 지우는 함수
    cputs() : 문자열을 화면에 출력하는 함수
    cgets() : 문자열을 입력받는 함수
    kbhit() : 키보드 입력이 있는지 확인하는 함수
    textcolor() : 텍스트 색상을 변경하는 함수
    textbackground() : 텍스트 배경 색상을 변경하는 함수
    window() : 콘솔 창의 위치와 크기를 설정하는 함수
    gotoxy() : 커서를 특정 위치로 이동시키는 함수
    wherex() : 현재 커서의 x 좌표를 반환하는 함수
    wherey() : 현재 커서의 y 좌표를 반환하는 함수
    normvideo() : 텍스트 속성을 기본값으로 설정하는 함수
    highvideo() : 텍스트 속성을 강조된 상태로 설정하는 함수
    lowvideo() : 텍스트 속성을 어두운 상태로 설정하는 함수
    insline() : 현재 커서 위치에 빈 줄을 삽입하는 함수
    delline() : 현재 커서 위치의 줄을 삭제하는 함수
    Note: conio.h is not part of the C standard library and may not be available on all compilers or platforms.
    
    getche와 getchar의 차이점
    getche는 입력된 문자를 즉시 화면에 표시하지만, getchar는 입력된 문자를 화면에 표시하지 않음
    getche는 입력된 문자를 버퍼에 저장하지 않고 즉시 반환하지만, getchar는 입력된 문자를 버퍼에 저장한 후, 사용자가 Enter 키를 누를 때까지 기다림
    getche는 특수 문자(예: 백스페이스, 화살표 키 등)를 처리하지 않지만, getchar는 특수 문자를 처리할 수 있음
    getche는 여러 문자를 입력받을 수 없지만, getchar는 여러 문자를 입력받을 수 있음
    getche는 콘솔 환경에서만 사용할 수 있지만, getchar는 콘솔 환경뿐만 아니라 파일이나 다른 입력 스트림에서도 사용할 수 있음

*/

int main()
{
    int v1, v2;
    char key;
    printf("간단한 계산기 프로그램입니다.\n");
    printf("사용법: 두 개의 정수를 입력한 후, 연산자(+, -, *, /, ^)를 입력하세요.\n");
    printf("정수를 다시 입력하려면 'R', 종료하려면 'Q'를 누르세요.\n");
    // start:  // goto문 레이블, 가급적 사용하지 않는 것이 좋음. 이유는 코드의 가독성과 유지보수성을 떨어뜨림
    
    while(1){ // 무한 루프, 정수를 다시 입력받기 위함}
        printf("value 1 ? "); scanf("%d", &v1);
        printf("value 2 ? "); scanf("%d", &v2);

        while(getchar() != '\n'); // 버퍼 비우기, scanf 후 남아있는 개행문자 제거

            
        while(1){ // ==for(;;)
            float result;
            key = getch(); // 키보드로부터 문자 입력 받음, 화면에 표시 안됨
            /*
            float result =
                        (key == '+') ? ((float)v1 + v2) : // 형변환 해줘야 정확한 실수 계산 가능
                        (key == '-') ? ((float)v1 - v2) : 
                        (key == '*') ? ((float)v1 * v2) : 
                        (key == '/') ? ((float)v1 / v2) : 
                        (key == '^') ? pow(v1,v2) :
                        printf("Invalid operator. Please use +, -, *, /, ^.\n");
                        continue; // 잘못된 연산자 입력 시 다시 입력 받음
                        break;

            }
            */
            
            if (key == 'R' || key == 'r'){// R 또는 r 입력 시
                break;
            } // 바깥 while문으로 나감, 정수 다시 입력 받음
            else if (key == 'Q' || key == 'q'){// Q 또는 q 입력 시
                return 0; // 프로그램 종료
            }

            
            switch (key)
                {
                case '+':
                    result =(float)v1 + v2;
                    break;
                case '-':
                    result = (float)v1 - v2;
                    break;
                case '*':
                    result = (float)v1 * v2;
                    break;
                case '/':
                    result = (float)v1 / v2; 
                    break;
                case '^':
                    result = pow((double)v1,(double)v2); // 제곱 연산
                    break;
                default:
                    printf("유효하지 않은 연산자 입니다.\n");
                    continue; // 잘못된 연산자 입력 시 다시 입력 받음
                    break;
                }

            printf("%d %c %d = %.2f\n", v1, key , v2, result);
        }
    }
}