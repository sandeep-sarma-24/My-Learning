#include<bits/stdc++.h>
using namespace std; 


class Node{
public: 
    int data ; 
    Node* next;

    Node(int value){
        /* automatically assigns the value to the data */
        data = value; 
        /* Next pointer is pointed to NULL */
        next = NULL;
    }
};

    // Function to insert an element at head position
void insertAtHead(Node*& head, int val){
    // initialising a new node (n)
    Node* n = new Node(val);
    // pointing n's node to previous head
    n->next = head;
    // making the node (n) as a new head
    head = n ;
}

    // function to insert an element at specific position
void insertafter(Node* head, int key, int val){

    Node* n = new Node(val);
    if(key == head->data){
        n->next = head->next;
        head->next = n;
        return;
    }

    Node* temp = head; 
    while(temp->data != key){
        temp = temp->next;
        if (temp == NULL){
            return; 
        }
    }
    n->next = temp->next; 
    temp-> next = n ;
}

    // function to insert an element at the end 
void insertAtTail(Node*& head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n ; 
        return ;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node*& head){
    Node * temp = head; 
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main(){

    Node* head = NULL ;

    
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    cout << "After insertion at head: ";
    display(head);
    cout << endl;

    insertAtTail(head, 4);
    insertAtTail(head, 5);
    cout << "After insertion at tail: ";
    display(head);
    cout << endl;

    insertafter(head, 1, 2);
    insertafter(head, 5, 6);
    cout << "After insertion at a given position: ";
    display(head);
    cout << endl;

    return 0;

}