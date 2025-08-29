#include <stdio.h>

// 함수에 다차원 배열을 전달할 때는 보통 포인터와 차원의 크기를 함께 전달합니다.
void printArray(int* arr, int rows, int cols) {
    printf("함수에서 포인터로 배열 출력:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // 포인터 연산을 사용하여 2차원 배열의 요소에 접근합니다.
            // arr[i][j]는 내부적으로 *(arr + i * 열_개수 + j)와 같이 동작합니다.
            printf("%d ", *(arr + i * cols + j));
        }
    }
}

int main() {
    // 3행 4열의 2차원 배열 선언 및 초기화
    int data[3][4] = {
        {1, 10, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("배열 표기법으로 요소 접근:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ", data[i][j]);
        }
    }

    printf("\n\n포인터를 사용하여 요소 접근:\n");

    // 2차원 배열의 이름 'data'는 첫 번째 행을 가리키는 포인터(int (*)[4])로 해석될 수 있습니다.
    // 배열의 모든 요소에 순차적으로 접근하기 위해 첫 번째 요소의 주소를 int 포인터에 저장합니다.
    int* ptr = &data[0][0];

    for (int i = 0; i < 3 * 4; ++i) {
        printf("%d ", *(ptr + i));
    }
    
    // 함수에 2차원 배열 전달
    // 배열은 메모리에 연속적으로 저장되므로, 첫 번째 요소의 주소를 전달하여 함수에서 사용할 수 있습니다.
    printf("\n\n");
    printArray(&data[0][0], 3, 4);

    int *pA = &data[0][0];
    int* pB = &data[0][1];

    printf("\n%d", *(pA+1));
    printf("\n%d", *pB);



    return 0;
}
