#include <stdio.h>
#include <string.h> // strlen �Լ� ����� ���� ��� ���� ����

/*
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    // �迭�� ��� ��Ҹ� ���ϴ� for ����
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);
    printf("Array elements are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nArr size: %zu\n", sizeof(arr)); // �迭�� ũ�� ���
    printf("Arr address: %p\n", arr); // �迭�� �ּ� ���
    printf("Arr[0] address: %p\n", &arr[0]); // �迭 ù ����� �ּ� ���
    //arr = arr[0]�� �ּ�

    printf("Arr: %d\n", arr); // �迭�� �ּ� ���
    printf("Arr[0]: %d\n", arr[0]); // �迭 ù ����� �� ���
    //arr  != arr[0]�� ��

    return 0;
}
*/

/*
int main(void)
{
int i;
char ch;
char str[]="Hello World!";
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
*/

int main(void){
    int array[10];
    for(int i = 0; i < 10; i++){
        array[i] = i * 10;
    }
    printf("Array elements are: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }

    int array2[5]={1,2,3};
    printf("\nArray2 elements are: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", array2[i]);
    }

}