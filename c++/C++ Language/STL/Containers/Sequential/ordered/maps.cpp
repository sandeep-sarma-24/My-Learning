#include<bits/stdc++.h>
using namespace std; 

int main(){
    map<int , string> m ; 
    m[1] = "abc"; // inserting data Olog(n)
    m[5] = "cdc";
    m[3] = "acd";

    m.insert({4,"afg"});

    map<int, string>::iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl; ;
    }

    m.erase(3); // log(n) // 
    auto it1 = m.find(3); // Olog(n)
    if(it1 == m.end()){
        cout << "No Value";
    }else{
        cout << (*it1).first << " " << (*it).second;
    }
}