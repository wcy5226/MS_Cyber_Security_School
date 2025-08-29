#include <stdio.h>
#include <string.h> // strlen 함수 사용을 위한 헤더 파일 포함


int main(void){
    char str[10] = "abcd";
    printf("String: %s\n", str);
    printf("String length: %zu\n", strlen(str)); // 문자열의 길이 출력
    printf("String size: %zu\n", sizeof(str)); // 배열의 크기 출력


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
    printf("String address: %p\n", str); // 배열의 주소 출력
    for (int i = 0; i < strlen(str); i++) //문자열의 길이만큼 반복
    {
        printf("%p\n", str+i);  
        //각 문자들을 하나씩 출력
        //str == &str[0] == str+0
        //str+1 == &str[1]

    }

    return 0;

}