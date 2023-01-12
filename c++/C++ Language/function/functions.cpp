#include<iostream>
#include<cmath>
using namespace std;

// normal function with no parameter
void greet(){
    cout << "Hello There" << endl;
}

// function with parameter with no return

void displayNum(int n1 , float n2){
    cout << "The int number is : " << n1 << endl;
    cout << "The float number is : " << n2 << endl;
}

// function with parameter with return statement

int add(int n1 , float n2){
    return (n1 + n2);
}

int main(){
    
    greet();

    int num1 = 5; 
    double num2 = 5.5; 
    displayNum(num1,num2);

    int sum; 
    sum = add(num1,num2);
    cout << "5 + 5.5 = " << sum << endl;

    //c++ inbuilt function library
    double number , squareRoot; 
    number = 25.0; 
    squareRoot = sqrt(number);

    cout << "Square root of " << number << " = " << squareRoot;

    return 0;
}