#include <iostream>
#include <conio.h>
using namespace std;


int starPattern(int n){
    for(int j = n ; j > 0 ; j--){
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