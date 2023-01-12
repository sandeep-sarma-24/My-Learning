#include<iostream>
using namespace std;

class rectangle {
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

    rectangle(){  // default constructor
        length = 0; 
        breadth = 0;
    }

    rectangle(int l, int b){ //Parameterized Constructor
        setLength(l);
        setBreadth(b);
    }

    rectangle(rectangle &r){  //Copy Constructor
        length = r.length;
        breadth = r.breadth;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }

};

int main(){
    rectangle r1(10,5);
    rectangle r2(r1);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
}