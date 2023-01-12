#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;

};
int main(){
    Rectangle r = {5,10};
    
    cout << "Perimeter of Rectangle : " << r.length * r.breadth << endl;
    
    return 0;
}