#include <stdio.h>
#include <string.h> // strlen �Լ� ����� ���� ��� ���� ����

int main(){
    char *str = "Hello, World!";
    printf("%s\n", str);
    printf("���ڿ��� ����: %zu\n", strlen(str)); // ���ڿ��� ���� ���

    char str2[50]; // ����� ū �迭 ����
    strcpy(str2, "Hello, World!"); // str�� ������ str2�� ����
    printf("%s\n", str2);
    printf("���ڿ��� ����: %zu\n", strlen(str2)); // ���ڿ��� ���� ���
}