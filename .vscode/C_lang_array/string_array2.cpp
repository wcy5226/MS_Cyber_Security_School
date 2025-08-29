#include <stdio.h>
#include <string.h> // strlen 함수 사용을 위한 헤더 파일 포함


int main(void){
    int i;
    char ch;
    char str[100];
    scanf("%s",str);
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
