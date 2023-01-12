#include <iostream>
using namespace std;

int main(){

    // normal representation (for loop)

    for(int i =1 ; i <= 5 ; ++i){
        cout << i << " " << endl;
    }

    // Range based for loop 
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     
    for(int n : num_array){
        cout << n << " "; 
    }

    //while loop 

    int b = 1; 
    while(b <= 5){
        cout << b << " ";
        ++b;
    }

    // do-while loop
    int i =1 ;
    do {
        cout << i << " " << endl;
        ++i;
    }
    while(i <= 5);

    return 0;
}