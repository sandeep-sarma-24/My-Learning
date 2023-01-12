#include<iostream>
using namespace std;

int main(){
    char s[20]; 
    cout << "Enter your name : " << endl;

    cin >> s; // only first value will be taken into string 

    cout << s << endl; // like if i type Sandeep Sarma , then only sandeep will be considered.
    
    // to get both the strings we need to use string

    char r[50];

    cout << "Enter your name : " << endl;
    cin.get(r, 50);
    cin.getline(r,50);
    return 0;
}