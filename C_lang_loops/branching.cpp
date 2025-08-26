#include <stdio.h>
#include <conio.h>
#include <math.h>

/*
1)���׿�����
���ǽ� ? ���϶��� �� : �����϶��� ��
����)
int a = 10, b = 20;
int max = (a > b) ? a : b; // max���� 20�� �����

2)switch��
switch(ǥ����){
    case ���ǥ����1:
        // ǥ������ ���� ���ǥ����1�� ���� �� ����Ǵ� �ڵ�
        break; // break���� ���û����̸�, ������ ���� case�� ��� �����
    case ���ǥ����2:
        // ǥ������ ���� ���ǥ����2�� ���� �� ����Ǵ� �ڵ�
        break;
    ...
    default:
        // � case�͵� ��ġ���� ���� �� ����Ǵ� �ڵ�
        break;
}
ǥ������ ����� ������ �Ǵ� �������̾�� �ϸ�, �Ǽ����̳� ���ڿ��� ����� �� ����
����)
int day = 3;
switch (day) {
    case 1:
        printf("������\n");
        break;
    case 2:
        printf("ȭ����\n");
        break;
    case 3:
        printf("������\n");
        break;
    case 4:
        printf("�����\n");
        break;
    case 5:
        printf("�ݿ���\n");
        break;
    case 6:
        printf("�����\n");
        break;
    case 7:
        printf("�Ͽ���\n");
        break;
    default:
        printf("�߸��� �����Դϴ�.\n");
        break;
}


*/

/*
    conio.h
    �� ����� �ܼ� ����¿� ���õ� �Լ����� ����
    getch() : Ű����κ��� ���ڸ� �Է¹޴� �Լ���, �Էµ� ���ڸ� ȭ�鿡 ǥ������ ����
    getche() : Ű����κ��� ���ڸ� �Է¹޴� �Լ���, �Էµ� ���ڸ� ȭ�鿡 ǥ����
    getchar() : Ű����κ��� ���ڸ� �Է¹޴� �Լ���, �Էµ� ���ڸ� ȭ�鿡 ǥ����
    putch() : ���ڸ� ȭ�鿡 ����ϴ� �Լ�
    putchar() : ���ڸ� ȭ�鿡 ����ϴ� �Լ�
    clrscr() : �ܼ� ȭ���� ����� �Լ�
    cputs() : ���ڿ��� ȭ�鿡 ����ϴ� �Լ�
    cgets() : ���ڿ��� �Է¹޴� �Լ�
    kbhit() : Ű���� �Է��� �ִ��� Ȯ���ϴ� �Լ�
    textcolor() : �ؽ�Ʈ ������ �����ϴ� �Լ�
    textbackground() : �ؽ�Ʈ ��� ������ �����ϴ� �Լ�
    window() : �ܼ� â�� ��ġ�� ũ�⸦ �����ϴ� �Լ�
    gotoxy() : Ŀ���� Ư�� ��ġ�� �̵���Ű�� �Լ�
    wherex() : ���� Ŀ���� x ��ǥ�� ��ȯ�ϴ� �Լ�
    wherey() : ���� Ŀ���� y ��ǥ�� ��ȯ�ϴ� �Լ�
    normvideo() : �ؽ�Ʈ �Ӽ��� �⺻������ �����ϴ� �Լ�
    highvideo() : �ؽ�Ʈ �Ӽ��� ������ ���·� �����ϴ� �Լ�
    lowvideo() : �ؽ�Ʈ �Ӽ��� ��ο� ���·� �����ϴ� �Լ�
    insline() : ���� Ŀ�� ��ġ�� �� ���� �����ϴ� �Լ�
    delline() : ���� Ŀ�� ��ġ�� ���� �����ϴ� �Լ�
    Note: conio.h is not part of the C standard library and may not be available on all compilers or platforms.
    
    getche�� getchar�� ������
    getche�� �Էµ� ���ڸ� ��� ȭ�鿡 ǥ��������, getchar�� �Էµ� ���ڸ� ȭ�鿡 ǥ������ ����
    getche�� �Էµ� ���ڸ� ���ۿ� �������� �ʰ� ��� ��ȯ������, getchar�� �Էµ� ���ڸ� ���ۿ� ������ ��, ����ڰ� Enter Ű�� ���� ������ ��ٸ�
    getche�� Ư�� ����(��: �齺���̽�, ȭ��ǥ Ű ��)�� ó������ ������, getchar�� Ư�� ���ڸ� ó���� �� ����
    getche�� ���� ���ڸ� �Է¹��� �� ������, getchar�� ���� ���ڸ� �Է¹��� �� ����
    getche�� �ܼ� ȯ�濡���� ����� �� ������, getchar�� �ܼ� ȯ��Ӹ� �ƴ϶� �����̳� �ٸ� �Է� ��Ʈ�������� ����� �� ����

*/

int main()
{
    int v1, v2;
    char key;
    printf("������ ���� ���α׷��Դϴ�.\n");
    printf("����: �� ���� ������ �Է��� ��, ������(+, -, *, /, ^)�� �Է��ϼ���.\n");
    printf("������ �ٽ� �Է��Ϸ��� 'R', �����Ϸ��� 'Q'�� ��������.\n");
    // start:  // goto�� ���̺�, ������ ������� �ʴ� ���� ����. ������ �ڵ��� �������� ������������ ����߸�
    
    while(1){ // ���� ����, ������ �ٽ� �Է¹ޱ� ����}
        printf("value 1 ? "); scanf("%d", &v1);
        printf("value 2 ? "); scanf("%d", &v2);

        while(getchar() != '\n'); // ���� ����, scanf �� �����ִ� ���๮�� ����

            
        while(1){ // ==for(;;)
            float result;
            key = getch(); // Ű����κ��� ���� �Է� ����, ȭ�鿡 ǥ�� �ȵ�
            /*
            float result =
                        (key == '+') ? ((float)v1 + v2) : // ����ȯ ����� ��Ȯ�� �Ǽ� ��� ����
                        (key == '-') ? ((float)v1 - v2) : 
                        (key == '*') ? ((float)v1 * v2) : 
                        (key == '/') ? ((float)v1 / v2) : 
                        (key == '^') ? pow(v1,v2) :
                        printf("Invalid operator. Please use +, -, *, /, ^.\n");
                        continue; // �߸��� ������ �Է� �� �ٽ� �Է� ����
                        break;

            }
            */
            
            if (key == 'R' || key == 'r'){// R �Ǵ� r �Է� ��
                break;
            } // �ٱ� while������ ����, ���� �ٽ� �Է� ����
            else if (key == 'Q' || key == 'q'){// Q �Ǵ� q �Է� ��
                return 0; // ���α׷� ����
            }

            
            switch (key)
                {
                case '+':
                    result =(float)v1 + v2;
                    break;
                case '-':
                    result = (float)v1 - v2;
                    break;
                case '*':
                    result = (float)v1 * v2;
                    break;
                case '/':
                    result = (float)v1 / v2; 
                    break;
                case '^':
                    result = pow((double)v1,(double)v2); // ���� ����
                    break;
                default:
                    printf("��ȿ���� ���� ������ �Դϴ�.\n");
                    continue; // �߸��� ������ �Է� �� �ٽ� �Է� ����
                    break;
                }

            printf("%d %c %d = %.2f\n", v1, key , v2, result);
        }
    }
}