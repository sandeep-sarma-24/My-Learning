#include<stdio.h>

int main(){
    int x[4];
    int i ;

    for(i=0; i < 4 ; i++){
        printf("&x[%d] = %p\n", i, &x[i]);
    }
    // there is difference btw 2 consecutive elements of array x, 
    // with diffrence of 4 bytes.
    printf("Address of array x: %p\n", x);
    printf("Value of array x: %d\n", *x); // it is assigning garbage value
    printf("Value of array x[0]: %d", x[0]); // garbage value of (x):
    

    // the address of (x) and x[0] is same because the variable x points to first element of array.
    // hence &x[0] == x(%p) and x[0] == *x(%d)
    return 0 ;
}