#include <stdio.h>
#include <stdlib.h> // For malloc and free
#include <string.h> // For strcpy

// 포인터를 사용하여 두 변수의 값을 교환하는 함수
void swap(int* a, int* b) {
    printf("Swap 함수 내 (전): a=%d, b=%d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Swap 함수 내 (후): a=%d, b=%d\n", *a, *b);
}

// 학생 정보를 담는 구조체
typedef struct {
    int id;
    char name[50];
} Student;

int main() {
    // 학습 목표: 포인터의 기본 개념을 이해합니다.
    // - 포인터 변수 선언, 변수의 주소 할당(& 연산자)
    // - 포인터가 가리키는 값에 접근(역참조, * 연산자)
    // - 포인터를 이용해 원본 변수의 값을 변경하는 방법
    printf("--- 1. 기본 포인터 ---\n");
    int var = 10;
    int* ptr; // 포인터 선언

    ptr = &var; // ptr에 var의 메모리 주소 저장

    printf("변수 var의 값: %d\n", var);
    printf("변수 var의 메모리 주소: %p\n", &var);
    printf("포인터 ptr에 저장된 주소: %p\n", ptr);
    printf("포인터 ptr이 가리키는 값 (역참조): %d\n\n", *ptr);

    *ptr = 20; // 포인터를 통해 var의 값을 변경
    printf("포인터로 값 변경 후 var의 값: %d\n\n", var);

    // 학습 목표: 함수에 포인터를 인자로 전달하여 '참조에 의한 호출' 효과를 구현하는 방법을 배웁니다.
    // - 함수 외부의 변수 값을 함수 내부에서 직접 변경할 수 있습니다.
    printf("--- 2. 포인터와 함수 ---\n");
    int x = 100;
    int y = 200;
    printf("Swap 함수 호출 전: x=%d, y=%d\n", x, y);
    swap(&x, &y); // 변수의 '주소'를 전달
    printf("Swap 함수 호출 후: x=%d, y=%d\n\n", x, y);

    // 학습 목표: 배열과 포인터의 밀접한 관계를 이해합니다.
    // - 배열의 이름이 곧 첫 번째 요소의 주소임을 확인합니다.
    // - 포인터 연산(p + i)을 통해 배열의 각 요소에 접근하는 방법을 익힙니다.
    printf("--- 3. 포인터와 배열 ---\n");
    int arr[5] = {10, 20, 30, 40, 50};
    int* arr_ptr = arr; // 배열 이름은 배열의 첫 번째 요소의 주소와 같다. (arr_ptr = &arr[0]; 와 동일)

    printf("배열 이름으로 접근: arr[2] = %d\n", arr[2]);
    printf("포인터로 접근: *(arr_ptr + 2) = %d\n", *(arr_ptr + 2));
    
    printf("배열 요소를 포인터로 순회:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(arr_ptr + %d) = %d\n", i, *(arr_ptr + i));
    }
    printf("\n");

    // 학습 목표: 포인터 변수 자체의 주소를 저장하고 사용하는 이중 포인터의 개념을 학습합니다.
    // - 이중 포인터를 통해 원본 포인터의 값과, 원본 포인터가 가리키는 변수의 값까지 접근할 수 있습니다.
    printf("--- 4. 이중 포인터 (Pointer to Pointer) ---\n");
    int** double_ptr;
    double_ptr = &ptr; // ptr의 주소를 double_ptr에 저장

    printf("ptr의 주소: %p\n", &ptr);
    printf("double_ptr에 저장된 주소: %p\n", double_ptr);
    printf("double_ptr의 역참조 (*double_ptr): %p (ptr의 값과 동일)\n", *double_ptr);
    printf("double_ptr의 이중 역참조 (**double_ptr): %d (var의 값과 동일)\n\n", **double_ptr);

    // 학습 목표: 구조체 변수를 가리키는 포인터를 다루는 방법을 배웁니다.
    // - 화살표 연산자(->)를 사용하여 포인터로 구조체 멤버에 간편하게 접근하는 방법을 익힙니다.
    printf("--- 5. 구조체 포인터 ---\n");
    Student s1;
    s1.id = 1;
    strcpy(s1.name, "홍길동");

    Student* student_ptr = &s1; // 구조체 변수의 주소를 포인터에 저장

    // 화살표(->) 연산자를 사용하여 구조체 멤버에 접근
    printf("학생 ID: %d, 이름: %s\n", student_ptr->id, student_ptr->name);
    
    // (*student_ptr).id 와 같이 역참조 후 . 연산자를 사용해도 동일하다.
    printf("학생 ID: %d, 이름: %s\n\n", (*student_ptr).id, (*student_ptr).name);

    // 학습 목표: 프로그램 실행 중에 필요한 만큼 메모리를 할당하고 해제하는 동적 메모리 할당을 학습합니다.
    // - malloc()으로 힙(Heap) 영역에 메모리를 할당받고, 포인터로 해당 메모리를 사용합니다.
    // - free()를 통해 사용이 끝난 메모리를 반드시 해제하여 메모리 누수(Memory Leak)를 방지하는 것의 중요성을 이해합니다.
    printf("--- 6. 동적 메모리 할당과 포인터 ---\n");
    int* dynamic_arr;
    int n = 5;

    // malloc을 사용하여 int 5개 크기의 메모리 공간을 힙(heap)에 할당
    dynamic_arr = (int*)malloc(n * sizeof(int));

    if (dynamic_arr == NULL) {
        printf("메모리 할당 실패!\n");
        return 1;
    }

    printf("동적 할당된 배열에 값 저장 및 출력:\n");
    for (int i = 0; i < n; i++) {
        dynamic_arr[i] = i * 100;
        printf("%d ", dynamic_arr[i]);
    }
    printf("\n");

    // 사용이 끝난 동적 메모리는 반드시 해제해야 함 (메모리 누수 방지)
    free(dynamic_arr);
    printf("메모리 해제 완료.\n");


    return 0;
}
