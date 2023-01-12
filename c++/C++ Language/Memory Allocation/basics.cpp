#include<stdlib.h>
#include<stdio.h>

// types of Memory allocations
/*
1. Malloc() - Memory Allocation 
Syntax : ptr = (casttype) malloc(size);
Ex : ptr = (float*) malloc(100 * sizeof(float)); -> this allocated around 400 bytes of memory. 
and has 100 pointers, And the pointer ptr holds the address of first byte allocated.

2. Calloc() - Contigous Allocation
Syntax : ptr = (castType*) calloc(n,size);
Ex : ptr = (int*) calloc(35 , sizeof(int)); -> allocates contiguous space in memory for 25 elements of type int.

3. Realloc() - Allocated memory of malloc & calloc doesn't get freed so we use free()
Syntax : ptr = realloc(ptr, x); -> ptr is reallocated with new size of x.

4. Free() - if dynamically allocated memory is insufficient we use realloc() to change the size of allocated memory.
Syntax : free(ptr); -> releases the memory of ptr pointer
*/
int main(){

int n ,i , *ptr , sum = 0; 

printf("Enter numbers : ");
scanf("%d", &n);

ptr = (int*) malloc(n * sizeof(int));
 
  // if memory cannot be allocated
  if(ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }

  printf("Enter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }

  printf("Sum = %d", sum);
  
  // deallocating the memory
  free(ptr);

  return 0;

}