#include <stdio.h>

void swap(char** i, char** j){
    char* k = *i;
    *i = *j;
    *j = k;
}

int main(){
    char *kor[] = {"가","나","다"};
    char *eng[] = {"A","B","C"};
    char *mat[] = {"11","22","33"};

    char **arr[] = {kor,eng,mat};
        
    int rows=sizeof(arr)/sizeof(arr[0]);
    int cols=sizeof(kor)/sizeof(kor[0]);

    printf("rows = %d,cols = %d\n\n",rows,cols);

    for(int n=0; n<rows ; n++){
        for(int m=0 ; m<cols ; m++){
            printf("%s\t",arr[n][m]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int n=0; n<cols ; n++){

        for(int m=n+1 ; m<rows ; m++){
            swap(&arr[n][m],&arr[m][n]);

        }
    }


    for(int n=0; n<cols ; n++){
        for(int m=0 ; m<rows ; m++){
            printf("%s\t",arr[n][m]);
        }
        printf("\n");
    }
}


