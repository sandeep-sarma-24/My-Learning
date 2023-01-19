#include<bits/stdc++.h>
using namespace std; 

int main(){
    vector<int> v = {2,3,62,21};
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    cout << endl ;
    vector<int> ::iterator it = v.begin();
    cout << *(it + 2) << endl;  

    vector<pair<int,int>> v_p ={{1,2},{3,4},{5,6}};
    vector<pair<int,int>> ::iterator it1;
    for(it1 = v_p.begin(); it1 != v_p.end(); ++it1){
        cout << (*it1).first << " " << (*it1).second << endl;
    }
    for(it1 = v_p.begin(); it1 != v_p.end(); ++it1){
        cout << (it1->first) << " " << (it1->second) << endl;
    }

    // (*it).first  <==>  (it->first)
    


}