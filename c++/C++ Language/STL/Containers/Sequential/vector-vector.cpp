#include<bits/stdc++.h>
using namespace std; 

void printarr(vector<int> V){
    cout << "size : " << V.size() << endl; 
    for(int i = 0 ; i < V.size(); i++){
        cout << V[i] << " ";
    }
    cout << endl;
}

int main(){

    int N ;
    cin >> N ; 
    vector<vector<int>> v ; 
    for(int i = 0 ; i < N ; ++i){
        int n ; 
        cin >> n ; 
        vector<int> temp;
        for(int j = 0; j < n ; ++j ){
            int x ; 
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v.push_back(vector<int> ()); 
    for(int i = 0 ; i < v.size(); ++i){
        printarr(v[i]);
    }

}