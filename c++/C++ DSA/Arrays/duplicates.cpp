#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n = 10;
    int arr[n] = {3,6,8,8,10,12,15,15,15,20};

    int last_Duplicate = 0 ; 
    int j = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == arr[i+1] && arr[i] != last_Duplicate){
            cout << arr[i] << endl;
            last_Duplicate = arr[i];
        }
    }
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i+1]){
            j = i + 1; 
            while(arr[j] == arr[i])j++;
            cout << arr[i] << " " << j + 1 << endl; 
            i = j -1 ; 
        }
    }
}