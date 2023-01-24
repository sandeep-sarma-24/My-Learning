#include<bits/stdc++.h>
using namespace std ;

string isPalindrome(string S){
    // storing the Reverse of the String S 
    string R = S ; 

    // It reverses the order of the elements in the range 
    //[first, last) of any container.
    reverse(R.begin(), R.end());

    if(S == R){
        return "YES" ;
    }
    else{
        return "NO";
    }


}

int main(){
    string S = "ABCCBA";
    cout << "Is it a Palindrome : " << isPalindrome(S);
}