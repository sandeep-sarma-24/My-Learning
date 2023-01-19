#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    cout << "size : " << v.size() << endl;
    for(int i = 0 ; i < v.size() ; i++){
        // v.size() -> O(1) - time complexity 
        cout << v[i] << " " ;
    }
    cout << endl; 
}

void print(vector<string> v){
    cout << "size : " << v.size() << endl;
    for(int i = 0 ; i < v.size() ; i++){
        // v.size() -> O(1) - time complexity 
        cout << v[i] << " " ;
    }
    cout << endl; 
}

int main(){
    vector<int> v ;
    int n ; 
    cin >> n ; // getting the size of vector

    for(int i = 0 ; i < n ; ++i){ // loop for Scanning elements
        int x ; 
        cin >> x ;
        v.push_back(x); // v.push_back() -> O(1) - time complexity
    }

    vector<string> v1 ;
    int n1 ;
    cin >> n1 ; 

    for(int i = 0 ; i < n1 ; ++i){ // loop for Scanning elements
        string y ; 
        cin >> y ;
        v1.push_back(y); // v.push_back() -> O(1) - time complexity
    }


    v.pop_back(); // v.pop_back() -> O(1) - time complexity
    vector<int> v2 = v; // This operation costs O(n) - time complexity
    print(v);
    print(v1);
    

}