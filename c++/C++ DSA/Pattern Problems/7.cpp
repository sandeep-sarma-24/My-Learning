#include <iostream>
#include <conio.h>
using namespace std;


int trianglePattern(int n){
    // row count
    for(int i = 1; i <= n; i++)
  {
    // n-i leading spaces
    for(int j = 1; j < i; j++)
        cout<<" ";
       
    // i elements
    for(int j = 1; j <= n - i + 1 ; j++)
      cout<<"* ";
    cout<<endl;
  }
}

int main(){
    int n ;
    trianglePattern(5);
}