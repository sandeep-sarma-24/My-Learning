#include <iostream>
#include <conio.h>
using namespace std;


int starPattern(int n){
    for(int i = 0 ; i < n ; i++){
        for(char ch = 'A' ; ch <= 'A' + (n - i - 1)  ; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int n ;
    starPattern(5);
}