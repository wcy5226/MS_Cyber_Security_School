#include <stdio.h>

int main() {
    int i,k;
    printf("i���� ���� - i�� �� �Է�: ");
    scanf("%d", &i);
    do
    {
        printf("k���� ���� - k�� �� �Է�: ");
        scanf("%d", &k);
    } while (k<i);
    

    int a = i;
    int b = 0;

    while (a<=k){
        b+=a++;
    }

    /* 

    for�� ����

    for(int a = i; a<=k; a++){
        b+=a;
    }
    */

    printf("%d", b);
    return 0;
}