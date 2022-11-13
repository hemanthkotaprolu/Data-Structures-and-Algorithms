#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
    
    Node(int data) {
        this->data = data;
        prev = NULL;
        next = NULL;
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

Node *insertAtBegin(Node *head, int data) {
    Node *temp = new Node(data);
    
    if(head == NULL) {
        return temp;
    }
    
    temp->next = head;
    head->prev = temp;
    head = temp;
    
    return head;
}

Node *deleteFirstNode(Node *head) {
    if(head == NULL) {
        return head;
    }
    
    Node *temp = head->next;
    if(temp != NULL) {
        temp->prev = NULL;
    }
    
    delete head;
    return temp;
}

int main() {
    
    Node *head = new Node(10);
    // Node *head = NULL;
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    
    head->next = temp1;
    
    temp1->prev = head;
    temp1->next = temp2;
    
    temp2->prev = temp1;
    
    int val = 5;
    
    cout << "***********" << endl;
    printList(head);
    
    cout << "***********" << endl;
    head = deleteFirstNode(head);
    printList(head);
    
    return 0;
}