#include <iostream>
#include <conio.h>
using namespace std;


int starPattern(int n){
    for(int i = 0 ; i < n ; i++){
        char ch = 'A' + i; 
        for(int j = 0 ; j <= i ; j++){
            cout << " " << ch;
        }
        cout << endl;
    }
}
int main(){
    int n ;
    starPattern(5);
}