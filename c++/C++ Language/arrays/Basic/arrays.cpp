#include<iostream>
using namespace std;

int main(){
    // declare and initialize an array
    int x[] = {19, 10, 8, 17, 9, 15};
    
     cout << "The numbers are: ";

  //  Printing array elements
  // using range based for loop
  for (const int &n : x) {
    cout << n << "  ";
  }

  cout << "\nThe numbers are: ";

  //  Printing array elements
  // using traditional for loop
  for (int i = 0; i <= 5; ++i) {
    cout << x[i] << "  ";
  }


    return 0; 
}
