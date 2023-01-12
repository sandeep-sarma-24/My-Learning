#include<iostream>
using namespace std; 


// parameter passing methods 

// type i - Pass by Value 
// type ii - Pass by Address 
// type iii - Pass by Reference

// Call by value Swap
void swap(int a ,int b){
    // here (a,b) are formal parameters
    int temp ; 
    temp = a;
    a = b ;
    b = temp ;
    cout << a << " " << b << endl;
}

// Call by address Swap

int main(){
    int x = 10 , y = 20; 
    swap(x,y);
    cout << x << " " << y << endl;
}
