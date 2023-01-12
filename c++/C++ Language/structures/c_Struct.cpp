#include <stdio.h>
#include <string.h>

// create struct with person1 variable 

struct Person {
    char name[50];
    int cit;
    float salary;
} Person1;

// create struct with 

int main(){
    strcpy(Person1.name, "George Orwell"); //we have used strcpy() function to assign the value to person1.name
    // This is because name is a char array (C-string) and we cannot use the assignment operator = with it after we have declared the string.
    Person1.cit = 42221;
    Person1.salary = 32141.124;

    printf("Name: %s\n",Person1.name);
    printf("Citizenship No: %d\n",Person1.cit);
    printf("Salary: %.2f",Person1.salary);

    return 0;
    
}