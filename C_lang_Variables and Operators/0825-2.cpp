#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {

    printf("sizeof(char) : %zu\n", sizeof(char));
    printf("CHAR_MIN : %d, CHAR_MAX : %d\n", CHAR_MIN, CHAR_MAX);

    printf("sizeof(short) : %zu\n", sizeof(short));
    printf("SHRT_MIN : %d, SHRT_MAX : %d\n", SHRT_MIN, SHRT_MAX);

    printf("sizeof(int) : %zu\n", sizeof(int));
    printf("INT_MIN : %d, INT_MAX : %d\n", INT_MIN, INT_MAX);

    printf("sizeof(long) : %zu\n", sizeof(long));
    printf("LONG_MIN : %ld, LONG_MAX : %ld\n", LONG_MIN, LONG_MAX);

    printf("sizeof(long long) : %zu\n", sizeof(long long));
    printf("LLONG_MIN : %lld, LLONG_MAX : %lld\n", LLONG_MIN, LLONG_MAX);

    printf("sizeof(float) : %zu\n", sizeof(float));
    printf("FLT_MIN : %e, FLT_MAX : %e\n", FLT_MIN, FLT_MAX);

    printf("sizeof(double) : %zu\n", sizeof(double));
    printf("sizeof(long double) : %zu\n", sizeof(long double));
    printf("LDBL_MIN : %Le, LDBL_MAX : %Le\n", LDBL_MIN, LDBL_MAX);

    printf("Press Enter to exit...");
    getchar(); // 이전 입력 버퍼의 개행 문자 제거
    getchar(); // 실제 Enter 입력 대기
    return 0;
}