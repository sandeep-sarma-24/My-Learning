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

void deleteNode(Node* node , int key){

    /* 1st Case */
    /* If key is in the first location */
    Node* temp = node;
    Node* prev = NULL;

    if(temp != NULL && temp->data == key){
        node = temp->next;
    
    delete temp;
    return;
    }
    else {
        while(temp != NULL && temp->data != key){
            prev = temp; 
            temp = temp->next;
        }
        if( temp == NULL){
            prev->next = temp->next;
        }
        delete temp;
    }

}

void deleteNodeRec(node*& head, int val)
{
 
    // Check if list is empty or we
    // reach at the end of the
    // list.
    if (head == NULL) {
        cout << "Element not present in the list\n";
        return;
    }
 
    // If current node is the
    // node to be deleted
    if (head->info == val) {
        node* t = head;
 
        // If it's start of the node head
        // node points to second node
        head = head->link;
 
        // Else changes previous node's
        // link to current node's link
        delete (t);
        return;
    }
    deleteNodeRec(head->link, val);
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
    cout << endl;
    display(head);

    return 0; 
}