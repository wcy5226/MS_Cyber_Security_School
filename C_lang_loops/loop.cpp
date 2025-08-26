#include <stdio.h>

int main()
{
    int index_s, index_e, val,add_num;
    
    while (1)
    {
        val = 0;

        printf("시작값:");
        scanf("%d", &index_s);
        printf("종료값:");
        scanf("%d", &index_e);
        printf("증가폭:");
        scanf("%d", &add_num);
        
        

        printf("합계\t인덱스\n");
        //while문
        /*
        while(index_s < index_e){
            val += index_s;
            printf("%3d\t",val);
            printf("%3d\n",index_s);
            index_s+=add_num;
        }
        */
       //for문
         for(;index_s < index_e; index_s+=add_num){
                val += index_s;
                printf("%3d\t %3d\n",val,index_s);
          }
        printf("\n");
    }
}