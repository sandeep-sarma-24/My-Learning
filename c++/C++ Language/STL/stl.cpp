#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {10,20,40,90};
    v.push_back(25);
    v.push_back(70);
    v.pop_back();
    
    for(int x:v)
        cout << x << endl;
        



}