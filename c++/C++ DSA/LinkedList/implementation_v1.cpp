#include<bits/stdc++.h>
using namespace std; 

class Node{
    public: 
    int data ; 
    Node* next; 
};

void push(Node*& head, int val){
    Node* n = new Node();

    n->data = val; 
    n->next = head;
    head = n ; 

}

void insertAfter(Node* prev_node, int data){

    /* Checking the prev code is NULL or NOT */
    if(prev_node == NULL){
        cout << "The given previous node cannot be NULL";
        return;
    }
    /* Alocation of new node (n) */
    Node* n = new Node; 
    /* assigning node (n) data with new data */
    n->data = data;
    /* pointing node n to the previous node next */
    n->next = prev_node->next;
    /* pointing previous node to n */
    prev_node->next = n ;

}

void append(Node* node, int val){
    Node* n = new Node();

    if(node == NULL){
        node = n;
        return ;
    }

    Node* temp = node;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}

void insertAtHead(Node* head, int val){
    Node* n = new Node();
    n->data = val; 
    n->next = head; 
    head = n;
}

void display(Node* node){
    while(node != NULL){
        cout << node->data << " -> " ;
        node = node->next; 
    }
    cout << "NULL"; 
}



int main(){
    Node* head = NULL; 

    push(head, 3);
    push(head, 4);
    push(head, 5);

    insertAfter(head, 7);
    insertAfter(head->next, 8);
    insertAfter(head->next->next, 9);
    append(head, 5);
    display(head);

    return 0; 
}