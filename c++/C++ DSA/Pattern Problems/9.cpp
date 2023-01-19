#include <iostream>
#include <conio.h>
using namespace std;


int starPattern(int n){

    // star pattern

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << " *";
        }
        cout << endl;
    }

    // inverted strat pattern
    for(int j = n - 1 ; j > 0 ; j--){
        for(int i = j ; i > 0 ; i--){
            cout << " *";
        }
        cout << endl;
    }
}
int main(){
    int n ;
    starPattern(5);
}