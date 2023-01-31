#include<bits/stdc++.h>
using namespace std; 

class Node {
public: 
    int data; 
    Node* next; 
};

void push(Node** head, int new_data){

    /* allocation of node */
    Node* new_node = new Node();
    /* embedding the data into the node */
    new_node->data = new_data; 
    /* linking the old list of the new node */
    new_node->next = (*head);
    /* pointing the head to the new node */
    (*head) = new_node;

}

int getCount(Node* head){
    int count = 0; // initializing the count 
    Node* current = head; // initializing the count 
    while (current != NULL){
        count++;
        current = current->next; // changing the pointer of current node to next node 

    }
    return count;
}


int main(){
    /* Start with the empty list */
    Node* head = NULL;
  
    /* Use push() to construct below list
    1->2->1->3->1 */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
  
    // Function call
    cout << "count of nodes is " << getCount(head);
    return 0;
}