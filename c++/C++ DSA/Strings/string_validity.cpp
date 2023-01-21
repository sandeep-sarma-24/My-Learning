#include<bits/stdc++.h>
using namespace std; 

char valid(char A[]){
    int i ; 
    for(int i = 0 ; i != '\0' ;i++){
        if(!(A[i] >= 65 && A[i] <= 90) && // Capital letters
        !(A[i] >= 97 && A[i] <= 122) && // Small letters
        !(A[i] >= 48 && A[i] <= 57) && !(A[i] == ' ')){ // Numbers
            cout << "it is a invalid string" << endl; 
           
        }
        else {
            cout << "it is valid string" << endl;
        }
    }
}

int main(){

    char A[] = "How are you " ; 
    valid(A);
    }


