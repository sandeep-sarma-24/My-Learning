#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr , i ,n1, n2; 
    printf("Enter size: "); 
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("addresses of prev : \n");
    for(i =0 ; i < n ; ++i){
        printf("%p\n", ptr + i);
    }
    printf("\n Enter the new size : ");
    scanf("%d", &n2); 

    // rellocating the memory 
    ptr = realloc(ptr , n2 * sizeof(int));
    for(i = 0; i < n2; ++i)
    printf("%pc\n", ptr + i);

    free(ptr);
    return 0;
}