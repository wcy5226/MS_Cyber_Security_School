#include <stdio.h>

int main (void){
    printf("소수 판별기\n");
    int num;
    printf("소수를 찾을 범위를 입력하세요: 1 ~ ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("소수가 아닙니다.\n");
        return 0;
    }
    
    for (int k = 2 ; k <= num; k++)
    {
        if (k%10==0) printf("\n");
        bool isPrime = true;
        for (int i = 2; i * i <= k; i++) {
            /*
            printf("i의 값: %d\n", i); // 디버깅용 출력i * i <= num
            printf("i * i: %d\n", i * i); // 디버깅용 출력
            printf("%d %% %d: %d\n\n", k,i,num % i); // 디버깅용 출력
            */
            if (k % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            printf("%d\t", k);
        }
    }

    return 0;

}