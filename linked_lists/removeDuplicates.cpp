#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printList(Node *head) {
    
    if(head == NULL) {
        cout << "Nothing to print" << endl;
        return;
    }
    
    Node *temp = head;
    
    while(temp != NULL) {
        
        cout << temp->data << " ";
        
        temp = temp->next;
    }
    
    cout << endl;
}

Node *removeDuplicates(Node *head){
    // your code goes here
    Node *temp = head->next, *prev = head;
    int val = head->data;
    while(temp != NULL) {
        if(val == temp->data) {
            prev->next = temp->next;
            temp = temp->next;
            // temp->next = NULL;
        } else {
            val = temp->data;
            temp = temp->next;
            prev = prev->next;
        }
    }
    
    return head;
}

int main() {
    
    Node *head = new Node(2);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(2);
    // head->next->next->next->next = new Node(50);
    
    cout << "*********" << endl;
    printList(head);
    
    head = removeDuplicates(head);
    
    cout << "*********" << endl;
    printList(head);
    
    return 0;
}