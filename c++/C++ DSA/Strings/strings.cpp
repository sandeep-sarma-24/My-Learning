#include<bits/stdc++.h>
using namespace std; 

/*
ASCII CODES
Capital Letters - A - 66
                  Z - 90 

Small Letters   - a - 97
                - z - 122
            
Numbers         - 0 - 48
                - 9 - 57

Enter           - 20 
space bar       - 13 
Escape          - 27

Ascii code start to end - 0 - 127 = 2^7 

Unicodes takes 2 bytes - 16 bits 
in 4 * 4 bits in form of hexadecimal 
*/

int main(){

char temp = 'A'; // 1 byte storage and in memory it will be 
// stored as value 65 

cout << temp << endl; 
printf("%d", temp); // it will print the ASCII value of A
cout << endl; 
printf("%c", temp); // it will print the value of temp = A

char X[5] = {'A','B','C','D','E'}; // ASCII codes will be 
// created here actually like X[66,67,68,68,69,70]

//No of ways to create strings
char name[10] = {'J','O','H','N','\0'};
char name0[] = {'J','O','H','N','\0'}; // \0 is used to delimit a string
char name1[] = "JOHN";
char *name2 = "JOHN"; // created in heap memory

printf("\n%s", name);

}