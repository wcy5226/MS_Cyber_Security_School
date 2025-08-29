#include <stdio.h>

// 함수의 매개변수를 참조자(reference)로 선언
void swap(int &i, int &j);

int main(void){

    int a = 10, b = 20;
    printf("before a : %d, b : %d\n",a,b);
    
    // 함수 호출 시 변수 자체를 전달
    swap(a, b);
    
    printf("after a : %d, b : %d\n",a,b);

}

// 참조자 매개변수를 이용해 값을 직접 변경
void swap(int &i, int &j){
    printf("\tbefore a : %d, b : %d\n",i,j);
    int k = i;
    i = j;
    j = k;
    printf("\tafter a : %d, b : %d\n",i,j);
}