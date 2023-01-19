#include<iostream>
#include<vector>
using namespace std;


int main(){
// creating a vector to store int
vector<int> vec;

int i ;

cout << "vector size = " << vec.size() << endl;

for(i = 0; i < 5; i++) {
      vec.push_back(i);
   }

cout << "extended vector size = " << vec.size() << endl;

for(i = 0 ; i < 5 ; i++){
    cout << "value of vec ["<<i<<"] = " << vec[i] << endl;
}
}
