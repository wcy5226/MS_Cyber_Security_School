#include <stdio.h>
#include <string.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int* p = arr;
    printf("int arr[] = {");
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]);i++){
        printf("%d",*(p+i));
        if (i<sizeof(arr)/sizeof(arr[0])-1) printf(", ");
    }
    printf("}\n");
    

    char str1[] = "what the hell"; //변경 가능한 문자열
    const char* str2 = "what the hell"; //변경 불가능한 문자열)포인터선언
    //char* str2 = "what the hell"; << 읽기전용 영역에 읽기 전용이라고 표현하지 않은 경우임
    //위와 같은 경우 컴파일러가 읽기전용으로 인식해두고 있지 않기 때문에 데이터를 덮어 쓰다가 오류가 발생함
    //배열형 문자열을 선언한뒤 strcpy로 복사하고 그걸 수정해야함.. 짜치게..

}