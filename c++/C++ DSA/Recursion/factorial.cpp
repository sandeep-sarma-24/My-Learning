#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if(n<=1)
        return n;
    else
        return n * func(n-1);
}

int loop(int n){
  int s = 1;
  for(int i=1; i <=n ; i++ ){
    s = s * i;
  }
  return s;
}
int main() {
    cout << "factorial using Recursion" << endl;
    cout << func(3) << endl;
    cout << "factorial using loops" << endl;
    cout << loop(3) << endl;
    return 0;
}