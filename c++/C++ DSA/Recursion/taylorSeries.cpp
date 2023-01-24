// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

double fact(double n){
    if(n<=1)
        return 1;
    else 
        return n * fact(n-1);
}

// base = b ; power = p 
double pow(double b , double p){
    int t = 1;
    for(int i = 1 ; i <= p ; i++){
        t = t * b ;
    }
    return t ;
}

double taylor(double x, double a){
   double sum;
   double value;
   double approx;
   
   for (int i=1; i<=a; i++)
    {
        sum=((pow(x,i))/fact(i));
        value+=sum;
    }
    approx = 1 + value;
    return approx;
}
int main() {
    
    
    cout << taylor(3,10) << endl;
    return 0;
}