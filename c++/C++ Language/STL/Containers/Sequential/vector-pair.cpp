#include<bits/stdc++.h>
using namespace std; 

// vector of pair
void printvp(vector<pair<int,int>> v){
    cout << "size : " << v.size() << endl; 
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i].first << " " << v[i].second << endl; 
    }
}

// vector of array
void printarr(vector<int> V){
    cout << "size : " << V.size() << endl; 
    for(int i = 0 ; i < V.size(); i++){
        cout << V[i] << " ";
    }
    cout << endl;
}

int main(){

    /* Vector - Pair */
    vector<pair<int,int>> v ; // nesting v(vector) = {{1,2},{9,1}}
    
    // scanning 
    int n ; 
    cin >> n ; 
    for(int i = 0 ; i < n ; i++){
        int x , y ; 
        cin >> x >> y ; 
        v.push_back({x,y});
    }
    


    cout << "Vector-Pair" << endl;
    printvp(v);

    
}
