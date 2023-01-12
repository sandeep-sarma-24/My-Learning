#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p , *q; 

    //creating the array of size of 5
    p = (int *)malloc(5*sizeof(int));
    p[0] = 3 ; p[1] = 5 , p[2] = 4, p[3] = 7, p[4] = 1;

    // loop to print the values
    for(int i = 0; i < 5 ;i++)
        printf("%d \n", p[i]);

    //creating the array of size of 10 
    q = (int *)malloc(10*sizeof(int));

    for(int i = 0; i < 5 ;i++)
        q[i] = p[i];

    free(p);
    p = q;
    q = NULL; 

    for (int i = 0 ; i < 5 ; i++){
        printf("%d \n", p[i]);
    }


    return 0;
}