#include <iostream>
#include <conio.h>
using namespace std;


int starPattern(int n){
    for(int i = 0 ; i < n ; i++){
        for(int i = 0 ; i < n ; i++){
            cout << " *";
        }
        cout << endl;
    }
}
int main(){
    int n ;
    starPattern(5);
}