#include <stdio.h>

int main()
{
    int index_s, index_e, val,add_num;
    
    while (1)
    {
        val = 0;

        printf("���۰�:");
        scanf("%d", &index_s);
        printf("���ᰪ:");
        scanf("%d", &index_e);
        printf("������:");
        scanf("%d", &add_num);
        
        

        printf("�հ�\t�ε���\n");
        //while��
        /*
        while(index_s < index_e){
            val += index_s;
            printf("%3d\t",val);
            printf("%3d\n",index_s);
            index_s+=add_num;
        }
        */
       //for��
         for(;index_s < index_e; index_s+=add_num){
                val += index_s;
                printf("%3d\t %3d\n",val,index_s);
          }
        printf("\n");
    }
}