#include<stdio.h>
#define M 3
#define N 4
int main (void){
    int A[M][N];
    int i, j;
    for(i=0; i<M;i++){
        for(j=0;j<N;j++){
            A[i][j]=i+j;
        }
    } 
    for (i=0;j<M;j++){
        printf("row %d", i);
        for(j=0;j<N;j++){
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}