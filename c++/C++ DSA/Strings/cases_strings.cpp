#include<bits/stdc++.h>
using namespace std; 

char lower_case(char A[]){
    int i ; 
    for(int i = 0 ; A[i] != '\0'; i++){
        A[i] = A[i] + 32; 
    }
    cout << "lower_case string is : " << A << endl;
}

char upper_case(char A[]){
    
    for(int i = 0 ; A[i] != '\0'; i++){
        A[i] = A[i] - 32; 
    }
    cout << "upper_case string is : " << A << endl;

}

int main(){
    char a[] = "WELCOME";
    lower_case(a);
    char b[] = "welcome";
    upper_case(b);
    
    

    
    

}