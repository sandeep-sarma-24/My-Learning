#include<bits/stdc++.h>
using namespace std; 

int main(){

    char A[] = "Painter";
    char B[] = "Painting"; 

    int i , j ; 
    for(i = 0 ,j = 0 ; A[i] != '\0' && B[j] != '\0'; i++,j++ ){
        if(A[i] != B[j])
            break; 
    }
    if(A[i] == B[j]){
            cout << "They are equal."<< endl;
    }
    else if(A[i] < B[j]){
        cout << "A is smaller than B" << endl;
    }
    else if(A[i] > B[j]){
        cout << "B is smaller than A" << endl;
    }
}