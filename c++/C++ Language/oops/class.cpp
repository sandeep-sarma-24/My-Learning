#include<iostream>
using namespace std;

class rectangle{
private:
    int length;
    int breadth;
public:
    void setLength(int l){
        length = l;
    }

    void setBreadth(int b){
        breadth = b;
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    rectangle r1; // rectangle object (r1)
    //r1.length = 10;
    //r1.breadth = 20;

    r1.setLength(10);
    r1.setBreadth(20);

    cout << "area is : " << r1.area() << endl;
    cout << "perimeter is : " << r1.perimeter() << endl;

    cout << "length is : " << r1.getLength() <<endl;
    cout << "breadth is : " << r1.getBreadth() << endl;
    
}