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

    printf("ù ��° �л� ���� �Է�\n");
    printf("�л� ��ȣ: \n");
    scanf("%d", &s1.num);
    printf("�л� �̸�: \n");
    scanf("%s", s1.name);
    printf("�л� ����: \n");
    scanf("%lf", &s1.score);

    printf("�� ��° �л� ���� �Է�\n");
    printf("�л� ��ȣ: \n");
    scanf("%d", &s2.num);
    printf("�л� �̸�: \n");
    scanf("%s", s2.name);
    printf("�л� ����: \n");
    scanf("%lf", &s2.score);
    
    printf("��ȣ: %d, �̸�: %s, ����: %.2f\n", s1.num, s1.name, s1.score);
    printf("��ȣ: %d, �̸�: %s, ����: %.2f\n", s2.num, s2.name, s2.score);
    return 0;

}

