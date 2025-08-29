#include <stdio.h>
#include <string.h> // strlen 함수 사용을 위한 헤더 파일 포함

/*
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    // 배열의 모든 요소를 더하는 for 루프
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);
    printf("Array elements are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nArr size: %zu\n", sizeof(arr)); // 배열의 크기 출력
    printf("Arr address: %p\n", arr); // 배열의 주소 출력
    printf("Arr[0] address: %p\n", &arr[0]); // 배열 첫 요소의 주소 출력
    //arr = arr[0]의 주소

    printf("Arr: %d\n", arr); // 배열의 주소 출력
    printf("Arr[0]: %d\n", arr[0]); // 배열 첫 요소의 값 출력
    //arr  != arr[0]의 값

    return 0;
}
*/

/*
int main(void)
{
int i;
char ch;
char str[]="Hello World!";
printf("--변경 전 문자열--\n");
printf("%s \n", str);

// 문자열 역순으로 저장 
int len = strlen(str);
for(i=0; i<len/2; i++) { // len/2까지만 반복, 그 이유는 교환이므로 절반까지만 하면 됨
    ch = str[i];        // 앞에서부터 하나씩 꺼내서 임시 변수에 저장
    //str[i] = str[len-i]; // 뒤에서부터 하나씩 꺼내서 앞에 저장
    //str[len-i] = ch;    // 임시 변수에 저장된 값을 뒤에 저장
    // 인덱스 오류 수정: len-i-1
    str[i] = str[len-i-1];
    str[len-i-1] = ch;
}



printf("\n\n--변경 후 문자열--\n");
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