#include <bits/stdc++.h>
using namespace std;


int trianglePattern(int n){
    for(int i = 0 ; i < n ; i++){
        // stars
        for(int j = 0; j < n - i - 1; j++){
            cout << "*";
        }

        // space
        for(int j = 1 ; j < 2 * i + 1 ; j++){
            cout << " ";
        }

        // stars
        for(int j = 0; j < n - i - 1; j++){
            cout << "*";
        }
    cout << endl;
    }
    int iniS = 8;
    for(int i = 1 ; i <= n ; i++){
        // stars
        for(int j = 1; j < i ; j++){
            cout << "*";
        }

        // space
        for(int j = 0 ; j < iniS ; j++){
            cout << " ";
        }

        // stars
        for(int j = 1; j < i ; j++){
            cout << "*";
        }
    iniS -= 2; 
    cout << endl;
    }

}

int main(){
    int n ;
    trianglePattern(5);
}