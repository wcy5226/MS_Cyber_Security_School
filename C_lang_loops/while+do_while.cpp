#include <stdio.h>

int main() {
    int i,k;
    printf("i부터 가산 - i의 값 입력: ");
    scanf("%d", &i);
    do
    {
        printf("k까지 가산 - k의 값 입력: ");
        scanf("%d", &k);
    } while (k<i);
    

    int a = i;
    int b = 0;

    while (a<=k){
        b+=a++;
    }

    /* 

    for문 사용시

    for(int a = i; a<=k; a++){
        b+=a;
    }
    */

    printf("%d", b);
    return 0;
}