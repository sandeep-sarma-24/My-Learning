#include <iostream>
#include <conio.h>
using namespace std;


int starPattern(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j <= i + 1 ; j++){
            cout << " " << j;
        }
        cout << endl;
    }
}
int main(){
    int n ;
    starPattern(5);
}