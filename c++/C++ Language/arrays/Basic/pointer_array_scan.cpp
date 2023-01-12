#include<stdio.h>
#include<stdlib.h>

int main(){
    int i , x[6], sum = 0;
    printf("Enter number: ");
    for(i = 0; i < 6 ; ++i){
        scanf("%d", x+i);

        sum += *(x+i);
    }
    printf("Sum = %d", sum);


}