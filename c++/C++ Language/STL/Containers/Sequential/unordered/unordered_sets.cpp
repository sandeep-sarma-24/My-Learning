#include<bits/stdc++.h>
using namespace std ; 

void print(unordered_set<string> &s){
    for(string value : s){
        cout << value << endl; 
    }
    // or 
    /*
    for(auto it = s.begin(); it != s.end(); ++it){
        cout << (*it) << endl;
    }
    */
}

int main(){
    unordered_set<string> s; 

    s.insert("abc"); // Olog(n)
    s.insert("zsdf");
    s.insert("andsjf");
    s.insert("andsjf"); 
    auto it = s.find("abc");
    print(s);
}