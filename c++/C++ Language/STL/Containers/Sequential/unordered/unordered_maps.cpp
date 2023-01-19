#include<bits/stdc++.h>
using namespace std; 

/* Unordered maps vs Ordered maps 

                    | Ordered maps        | Unordered Maps
                
    Ordering        | increasing  order   | no ordering
                    | (by default)        |

    Implementation  | Self balancing BST  | Hash Table
                    | like Red-Black Tree |  

    search time     | log(n)              | O(1) -> Average 
                    |                     | O(n) -> Worst Case

    Insertion time  | log(n) + Rebalance  | Same as search
                      
    Deletion time   | log(n) + Rebalance  | Same as search
*/

int main(){
    unordered_map<int , string> m ; 
    m[1] = "abc"; // inserting data Olog(n)
    m[5] = "cdc";
    m[3] = "acd";

    m.insert({4,"afg"});

    unordered_map<int, string>::iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl; ;
    }

    m.erase(3); // log(n) // 
    auto it1 = m.find(3); // Olog(n)
    if(it1 == m.end()){
        cout << "No Value";
    }else{
        cout << (*it1).first << " " << (*it).second;
    }
}