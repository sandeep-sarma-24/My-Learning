#include<bits/stdc++.h>
using namespace std;


int starPattern(int n){
    int num = 1;
    for(int i = 0 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << num << " ";
            num = num + 1; 
        }
        cout << endl;
    }
}
int main(){
    int n ;
    starPattern(5);
}