#include <stdio.h>

struct student
{
    /* data */
    int num;
    char name[20];
    double score;
};

int main(void){
    student s1,s2;

    printf("첫 번째 학생 정보 입력\n");
    printf("학생 번호: \n");
    scanf("%d", &s1.num);
    printf("학생 이름: \n");
    scanf("%s", s1.name);
    printf("학생 점수: \n");
    scanf("%lf", &s1.score);

    printf("두 번째 학생 정보 입력\n");
    printf("학생 번호: \n");
    scanf("%d", &s2.num);
    printf("학생 이름: \n");
    scanf("%s", s2.name);
    printf("학생 점수: \n");
    scanf("%lf", &s2.score);
    
    printf("번호: %d, 이름: %s, 점수: %.2f\n", s1.num, s1.name, s1.score);
    printf("번호: %d, 이름: %s, 점수: %.2f\n", s2.num, s2.name, s2.score);
    return 0;

}

