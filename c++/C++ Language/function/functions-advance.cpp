#include<iostream>
using namespace std; 

// overloading

// In C++, two functions can have the same name if the number and/or type of arguments passed is different.
// same named functions with different arguments
/* 
int test() { }
int test(int a) { }
float test(double a) { }
int test(int a, double b) { } */

// we can overload function in two types 
/* 
i  - different types of parameters
ii - differnet number of parameters
*/


//different types of parameters


//function with float type parameter 

float absolute(float var){
    if(var < 0.0)
        var = -var;
    return var;
}

//function with int type parameter 

int absolute(int var){
    if(var < 0)
        var = -var;
    return var; 
}


//different number of parameters

//function with int type single parameter 
void display(int var){
    cout << "Double number : " << var << endl;
}

//function with int and double type two parameters
void display(int var1 , double var2){
    cout << "Integer number : " << var1 << endl;
    cout << "Double number : " << var2 << endl;
}

int main(){
    cout << "Absolute value of -5 is : " << absolute(-5) << endl;
    cout << "Absolute value of -5.5 is : " << absolute(-5.5f) << endl;

    display(5);
    display(5.4,6.23);       
    return 0;
}
