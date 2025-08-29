#include <stdio.h>
#include <string.h> // strlen �Լ� ����� ���� ��� ���� ����


int main(void){
    char str[10] = "abcd";
    printf("String: %s\n", str);
    printf("String length: %zu\n", strlen(str)); // ���ڿ��� ���� ���
    printf("String size: %zu\n", sizeof(str)); // �迭�� ũ�� ���


    for (int i = 0; i < strlen(str) ; i++)
    {
        printf("%c %d\t",str[i],str[i]);
    }
    printf("\n");
    for (int i = 0; i < sizeof(str) ; i++)
    {
        printf("%c %d\t",str[i],str[i]);
    }
    printf("\n");
    printf("%s\n", str);
    printf("String address: %p\n", str); // �迭�� �ּ� ���
    for (int i = 0; i < strlen(str); i++) //���ڿ��� ���̸�ŭ �ݺ�
    {
        printf("%p\n", str+i);  
        //�� ���ڵ��� �ϳ��� ���
        //str == &str[0] == str+0
        //str+1 == &str[1]

    }

    return 0;

}