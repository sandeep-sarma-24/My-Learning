#include <bits/stdc++.h>
using namespace std;


int starPattern(int n){
    for(int i = 0 ; i < n ; i++){
        for(char ch = 'E' -  i; ch <= 'E'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int n ;
    starPattern(5);
}