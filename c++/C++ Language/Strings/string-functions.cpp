#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char *s ; 

    cout << "Enter a String :" <<endl;
    cin.getline(s,100);

    //strlen() function which returns the length of the string
    cout << "Length " << strlen(s) << endl; 

    //strcat() function which concatenates the strings

    char s1[20] = "Good";
    char s2[10] = "Morning";

    
    cout << strcat(s1,s2) << endl;
    return 0;
}