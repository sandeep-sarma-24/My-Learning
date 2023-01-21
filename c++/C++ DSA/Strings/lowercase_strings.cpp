#include<bits/stdc++.h>
using namespace std; 

int main(){
    char A[] = "WELCOME";
    int i ; 

    for(int i = 0 ; A[i] =! "\0"; i++){
        A[i] = A[i] + 32; 
    }
    cout << "lower_case string is : " << endl;
    for(int i = 0 ; A[i] =! "\0"; i++){
        cout << A[i] ;
    }
    printf("%s", A);

}