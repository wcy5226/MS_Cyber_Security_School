// �Ѻ��� ���̰� x�� ��n������ ���̸� ���ϴ� �Լ�
#include <stdio.h>
#include <conio.h>
#include <math.h>

// �Լ� ���� ����
float area(int n, float x);

int main() {
    int n;
    float x;

    while (1)
    {
        printf("��n������ ���� ���� n�� �Է��ϼ���: ");
        scanf_s("%d", &n);
        printf("�Ѻ��� ���� x�� �Է��ϼ���: ");
        scanf_s("%f", &x);
        printf("��%d������ ���̴� %.4f�Դϴ�.\n\n", n, area(n, x)); //�Լ� ȣ��
    }
    
}
// �Ѻ��� ���̰� x�� ��n������ ���̸� ���ϴ� �Լ��� ����
float area(int n, float x) {
    float result;
    result = (n * x * x) / (4 * tan(3.141592 * 1.0 / n));
    return result;
}