#include <stdio.h>
#include <stdlib.h>

int main(){

    // creation of arrays 
    // in stack
    int A[3][4] = {{1,2,3,4},{2,3,4,1},{12,31,34,14}};

    // in stack & heap memory
    int *B[3];
    
    B[0] = (int *)malloc(4*sizeof(int));
    B[1] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));
    
    // in heap memory
    int **C;
    C = (int **)malloc(3*sizeof(int));
    C[0] = (int *)malloc(4*sizeof(int));
    C[1] = (int *)malloc(4*sizeof(int));
    C[2] = (int *)malloc(4*sizeof(int));

    int i , j;

    for(i=0 ; i < 3 ; i++ ){
        for(j=0 ; j<4 ;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0 ; i < 3 ; i++ ){
        for(j=0 ; j<4 ;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0 ; i < 3 ; i++ ){
        for(j=0 ; j<4 ;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    } 

    return 0;

}