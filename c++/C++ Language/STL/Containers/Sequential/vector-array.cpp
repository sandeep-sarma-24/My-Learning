#include<bits/stdc++.h>
using namespace std;

// vector of array
void printarr(vector<int> V){
    cout << "size : " << V.size() << endl; 
    for(int i = 0 ; i < V.size(); i++){
        cout << V[i] << " ";
    }
    cout << endl;
}

int main(){
        /* Vector of Array */
    int N ; 
    cin >> N ;
    vector<int> V[N];
    for(int i = 0 ; i < N ; ++i){
        int n1 ; 
        cin >> n1 ; 
        
        for(int j = 0 ; j < n1 ; ++j){
            int x ; 
            cin >> x ; 
            V[i].push_back(x);
        }
    }

    cout << "Vector-array" << endl;
    for(int i = 0 ; i < N ; ++i){
        printarr(V[i]);
    }
}