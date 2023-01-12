#include<iostream>
using namespace std;

int main(){
    /*Stack-Memory*/

    int A[5] = {1,2,3,4,5}; // Creating an array in the stack memory 


    /*Heap-Memory*/

    // initializing a pointer 
    int *p ; 
    
    // Allocating the array into heap
    p = new int[5]; // creating an array in the heap memory

    p[0] = 12;
    p[1] = 13;

    cout << p[1] << endl;

    // creating a normal array (this cannot be modified)
    int size ; 
    cout << "Enter number of elements"; 
    cin >> size; 
    int B[size];

    cout << sizeof B << endl; 
    
    //creating a dynamic array , where size is modifiable
    int *c = new int[size];

    cout << "Enter new Size"; 
    cin >> size; 
    c = new int[size];

    cout << sizeof c << endl;

    // Deallocating the array in heap otherwise will lead to memory leak
    // delete []p;
    // p = nullptr; // null20 pointer
    return 0;
}