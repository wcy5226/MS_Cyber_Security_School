#include <stdio.h>
#include <string.h> // strlen �Լ� ����� ���� ��� ���� ����


int main(void){
    int i;
    char ch;
    char str[100];
    scanf("%s",str);
    printf("--���� �� ���ڿ�--\n");
    printf("%s \n", str);

    // ���ڿ� �������� ���� 
    int len = strlen(str);
    for(i=0; i<len/2; i++) { // len/2������ �ݺ�, �� ������ ��ȯ�̹Ƿ� ���ݱ����� �ϸ� ��
        ch = str[i];        // �տ������� �ϳ��� ������ �ӽ� ������ ����
        //str[i] = str[len-i]; // �ڿ������� �ϳ��� ������ �տ� ����
        //str[len-i] = ch;    // �ӽ� ������ ����� ���� �ڿ� ����
        // �ε��� ���� ����: len-i-1
        str[i] = str[len-i-1];
        str[len-i-1] = ch;
    }

    printf("\n\n--���� �� ���ڿ�--\n");
    printf("%s \n", str);
    return 0;
}
