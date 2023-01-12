#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char s1[20] = "Programming";
    char s2[10] = "gram";


    char s3[5] = "k";
    char s4[10] = "21314.132";

    cout << strstr(s1, s2) << endl; // finding the substring

    if(strstr(s1,s3) != NULL) 
        cout << strstr(s1,s3) << endl;
    else 
    cout << "Not found!" << endl; // string (k) not found
    
    // string to long number

    long int A = strtol(s1,NULL,10);
    long int B = strtol(s4,NULL,10);
    cout << A + 45 << endl;
    cout << B + 45 << endl;

    // string tokens

    char str1[50] = "x=1;y=20;z=35";
    cout << strtok(str1,"=;") << endl;

    char *token = strtok(str1 , "=;");

    while(token != NULL){
        cout << token << endl;
        token = strtok(NULL, "=;");
    }

    
    return 0;

}