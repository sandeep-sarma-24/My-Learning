#include<bits/stdc++.h>
using namespace std; 

/*
Given N strings , print Unique Strings
in lexicogrpahical order 
N <= 10^6
*/

/*
    input : 8 abc def abc ghj jkl ghj ghj abc
*/

int main(){
    set<string> s; 
    int n ; 
    cin >> n; 
    for( int i = 0 ; i < n ; ++i){
        string str; 
        cin >> str; 
        s.insert(str);
    }
    for(auto value : s){
        cout << value << endl;
    }

}