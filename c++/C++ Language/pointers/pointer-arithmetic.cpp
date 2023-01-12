#include<iostream>
using namespace std; 

int main(){

    int a[5] = {2,4,6,8,10};
    int *p = a ; 

    cout << *p << endl;
    p++; // increment by 2
    cout << *p << endl;
    p--; // decrement by 2
    cout << *p << endl;
    
    cout << p << endl; // address of the (p) or a[2]
    cout << p + 2 << endl; // address of the a[1] which increases the address by 8 units (4 bytes per address)

    cout << *(p+2) << endl; // value of address (p+2) which is a[2]
    p = p-4 ;

    //for fetching all the addresses using for loop
    for(int i = 0 ; i < 5 ; i++){
        cout << a + i << endl;
    }

    //for fetching all the values using for loop
    for(int i = 0 ; i < 5 ; i++){
        cout << *(a+ i) << endl; // or we can use p[i]
    }

    int *q = &a[4];
    cout << q-p << endl; // 


    return 0; 
} 