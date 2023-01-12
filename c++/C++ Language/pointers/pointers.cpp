#include<iostream>
using namespace std;

int main(){

    int x = 10 ;
    int *p; // declaration of pointer

    p = &x; // initialization of pointing (p) to the address of x

    // now the results 

    cout << x << endl; // will give the value of (x) , which is 10

    cout << &x << endl; // will give the address of (x) where it is stored 

    cout << p << endl ; // will give value of (p), which is the address of (x)

    cout << &p << endl; // will give the address of (p)

    // this is also called dereferencing ,which is accessing the data
    cout << *p << endl; // will give the value stored in the address of (p), which is (x)
}