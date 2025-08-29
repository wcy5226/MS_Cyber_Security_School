#include <stdio.h>
#include <string.h>
#include <stdlib.h> // atoi 함수를 사용하기 위해 추가

int main(int argc, char *argv[]) {
    const char *name[] = {"음식", "카레", "우동", "라면", "짜장면", "쫄면"};
    const char *kor[] = {"한글", "가", "나", "다", "라", "마"};
    const char *eng[] = {"영어", "A", "B", "C", "D", "E"};
    const char *mat[] = {"숫자", "30", "25", "35", "45", "55"};
    const char *city[] = {"지역", "시흥", "안산", "인천", "서울", "파주"};

    // void* 대신 char**를 사용하여 타입 안정성을 높입니다.
    const char **data[] = {name, kor, eng, mat, city};

    int num_categories = sizeof(data) / sizeof(data[0]);
    int num_items = sizeof(name) / sizeof(name[0]);

    // 프로그램 실행 시 인자가 2개가 아니면 사용법 안내 후 종료
    if (argc != 2) {
        printf("사용법 : --help\n");
        return 1;
    }

    // 문자열 인자를 정수로 변환 (atoi 사용)
    int index = atoi(argv[1]);

    // 입력된 번호가 유효한 범위 내에 있는지 확인

    if (strcmp(argv[1],"--help")==0){
        printf("사용법: ./report [번호 (1~%d)]\n", num_items - 1);
        printf("--- 선택 가능한 항목 ---\n");
        for (int i = 1; i < num_items; i++) {
            printf("%d. %s\n", i, name[i]);
        }
        return 1; // 오류 코드를 반환하며 종료    
    }
    else if (index < 1 || index >= num_items) {
        printf("잘못된 번호입니다. 1부터 %d 사이의 번호를 입력해주세요.\n", num_items - 1);
        return 1;
    }
    

    // 카테고리 출력
    for(int i = 0; i < num_categories; i++) {
        printf("%s\t", data[i][0]);
    }
    printf("\n----");
    for(int i = 0; i< num_categories-1; i++){
        printf("--------");
    }
    printf("\n");

    // 선택된 번호에 해당하는 데이터 출력
    for (int i = 0; i < num_categories; i++) {
      printf("%s\t", data[i][index]);
    }
    printf("\n");

    return 0;
}

