#include <stdio.h>

int main (void){
    printf("�Ҽ� �Ǻ���\n");
    int num;
    printf("�Ҽ��� ã�� ������ �Է��ϼ���: 1 ~ ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("�Ҽ��� �ƴմϴ�.\n");
        return 0;
    }
    
    for (int k = 2 ; k <= num; k++)
    {
        if (k%10==0) printf("\n");
        bool isPrime = true;
        for (int i = 2; i * i <= k; i++) {
            /*
            printf("i�� ��: %d\n", i); // ������ ���i * i <= num
            printf("i * i: %d\n", i * i); // ������ ���
            printf("%d %% %d: %d\n\n", k,i,num % i); // ������ ���
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