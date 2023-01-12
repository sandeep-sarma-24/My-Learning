#include <iostream>
using namespace std;

struct Rectangle {
int length;
int breadth;
};

struct Card{
int face;
int shape;
int color;
};
int main()
{
 struct Rectangle r;
 r.length = 10;
 r.breadth = 15;

 cout << "the area is : " << r.breadth*r.length <<endl;
}
