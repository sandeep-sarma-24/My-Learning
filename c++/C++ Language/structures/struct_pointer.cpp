#include<stdio.h>

struct person
{
    int age; 
    float weight; 
}*personPtr, person1;

int main(){

    personPtr = &person1; // address of person1 is stored in (personPtr) pointer
    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter Weight: ");
    scanf("%f", &personPtr->weight);

    printf("Age: %d\n", personPtr->age);// personPtr->age == (*personPtr).age
    printf("weight: %.2f", personPtr->weight); // person->weight == (*personPtr).weight

    return 0;
}
