#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n = 10; 
    int arr[n] = {1,2,3,5,6,9}; // the array should be sorted

    int dif = arr[0] - 0 ; 

    for(int i = 0 ; i < n; i++){
        if(arr[i] - i != dif){
            while(dif < arr[i]-i){
                cout << i + dif << endl;
                dif++;
            }
        } 
      } 
}