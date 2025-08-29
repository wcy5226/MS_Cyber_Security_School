#include <stdio.h>

void swap(int *i, int *j);

int main(void){

  int a = 10, b = 20;
  printf("before a : %d, b : %d\n",a,b);
  swap(&a,&b);
  printf("after a : %d, b : %d\n",a,b);

}

void swap(int *i, int *j){
  printf("\tbefore a : %d, b : %d\n",*i,*j);
  int k = *i;
  *i = *j ; 
  *j = k;
  printf("\tafter a : %d, b : %d\n",*i,*j);
}