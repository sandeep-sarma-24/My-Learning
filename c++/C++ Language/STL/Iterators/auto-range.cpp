#include<bits/stdc++.h>
using namespace std; 

int main(){
    vector<int> v = {2,3,62,21};
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl; 

    //vector<int> ::iterator it ; 
    for(auto it = v.begin(); it != v.end(); ++it){
        cout << (*it) << " " ; 
    }
    for(int value : v){
        cout << value << " "; 
    }
    cout << endl; 

    vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}};
    for(auto &value : v_p){}
}