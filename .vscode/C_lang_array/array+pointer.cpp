//배열 > 상수, 포인터 > 변수

#include <stdio.h>
#include <string.h>

int main(){

    //a=1, b=2, c=3 으로 선언
    int a=1,b=2,c=3;

    //일차원 배열 arr에 a,b,c 대입

    int arr[3]={a,b,c};

    //a b c 값 변경
    a=5;
    b=6;
    c=7;
    

    //arr 출력
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    printf("%d ",arr[i]);

    //abc 출력
    printf("\na = %d,  b = %d, c = %d",a,b,c);

    //즉 배열은 상수임을 알 수 있다.

    arr[0]=a;

    printf("\narr[0]=%d",arr[0]);

}