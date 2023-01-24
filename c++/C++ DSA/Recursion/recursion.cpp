#include<bits/stdc++.h>
using namespace std;

// recursion
void fun(int n){
  if(n > 0){
    cout << n << endl;
    fun(n-1);
  }
}
// reverse recursion 
void fun1(int m){
  if(m>0){
    fun(m-1);
    cout << m << endl;
    }
}

// Tree Recursion
void fun2(int o){
  if (o > 0){
    cout << o << endl;
    fun2(o-1);
    fun2(o-1);
  }
}

// Indirect recursion
void funA(int b);
void funB(int b){
  if(b>1){
    cout << b << endl;
    funA(b/2);
  }
}

void funA(int a){
  if(a>0){
    cout << a << endl;
    funB(a-1);
  }
}

// Nested Recursion 
int fun4(int n){
  if(n>100)
      return n-10;
  return fun4(fun4(n+11));
}

// sum of first whole numbers
int main() {
  int x = 3 ;
  int y = 3 ;
  int z = 3 ;
  
  fun(x);
  
  cout << "Reverse Recursion" << endl;
  
  fun1(y);
  

  cout << "Tree Recursion" << endl;

  fun2(z);

  cout << "Indirect-Recursion" << endl;

  funA(20);

  cout << "Nested Recursion" << endl;

  int r = fun4(100);
  cout << r << endl;
  return 0;
}