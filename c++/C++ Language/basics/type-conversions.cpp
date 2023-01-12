#include <iostream> 
using namespace std;

int main(){
    int num1 ;
    double num2 = 3.014;
    
    // implict conversion

    // c-style coversion from double to int
    num1 = (int)num2;

    //function style coversion from double to int
    num1 = int(num2);
    
    cout << "num1 = " << num1 << endl; 
    cout << "num2 = " << num2 << endl;
    return 0;
}