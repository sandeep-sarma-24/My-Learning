#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main(){
    struct Rectangle r;
    struct Rectangle s ={10,4};
    s.length = 15;
    s.breadth = 10;

    cout << s.length * s.breadth << endl;
}