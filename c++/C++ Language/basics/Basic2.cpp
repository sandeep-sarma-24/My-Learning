#include <iostream>
using namespace std;

int main(){
    int num1 = 70; 
    double num2 = 256.783;
    char ch = 'A';

    // endl is a manipulator used to insert a new line 
    // The << operator can be used more than once if we want to print different variables,
    // strings and so on in a single statement. 
    cout << "This is integer : " << num1 << endl; //print integer 
    
    cout << "This is double : "<< num2 << endl; //print double 

    cout << "This is Character : " << ch << endl; //print character

    return 0;
}