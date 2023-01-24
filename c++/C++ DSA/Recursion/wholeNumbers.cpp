#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if(n<=1)
        return n;
    else
        return n + func(n-1);
}

int loop(int n){
  int m = 0;
  for(int i = 1; i <= n; i++){
    m = m + i;
  }
  return m;
}
int main() {
    cout << "Using Recursion" << endl;
    cout << func(5) << endl;

  cout << "Using Loop" << endl;
  int s;
  cout << loop(5) << endl;
    return 0;
}