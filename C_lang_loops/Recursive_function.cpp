#include <stdio.h>
#include <string.h> // strlen �Լ� ����� ���� ��� ���� ����

void n_times(int n)
{
    static int result=1;
    if (n > 0) {
        result*=n;
        n_times(--n);
    }
    else    {
        printf("Factorial: %d\n", result);
    }  
}

int main(){
    int i;
    scanf("%d", &i);
    n_times(i);
}