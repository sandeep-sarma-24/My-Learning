#include<bits/stdc++.h>
using namespace std; 

struct Node{
    int data; 
    struct Node *next; 
};


int main(){

    // initializing a Node in C
    // P = (struct Node)malloc(sizeof(struct Node));   

     // initializing a Node in C++
    struct Node P ; 

    struct Node *p , *q; 

    q = p ; // (q) stores the address of (p)
    q = q->next; // (q) stores the address of (p) next node 
    p = p->next; // (p) stores the address of (p) next node

    struct Node *r;
    // To check that the pointer (r) is 0 or NULL then check by 
    // if(r == NULL)
    // if(r = 0)
    // if(!r) 

    /*
    To check whether the next node is 0 or end of linkedlist
    if(r->next == NULL) to check next node is 0 
    if(r->next != 0) to check next node is not 0
    */

   /*
   Display the entire linkedlist

    display(struct Node *p){
    // Not required // struct Node *p = first; // first is the 1st pointer of linkedlist 
    while(p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
    }

    display(first)

   */
   
    return 0; 
}