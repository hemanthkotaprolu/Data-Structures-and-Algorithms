#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void printCLL(Node *head) {
    Node *temp = head;
    
    if(head == NULL) {
        return;
    }
    
    while(temp != NULL && temp->next != head) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    if(temp!=NULL){
        cout << temp->data;
    }
    
    cout << endl;
}


Node *insertAtBegin(Node *head, int data) {
    Node *temp = new Node(data), *temp1 = head;
    
    if(head == NULL) {
        temp->next = temp;
        return temp;
    }
    
    while(temp1->next != head) {
        temp1 = temp1->next;
    }
    
    temp1->next = temp;
    temp->next = head;
    
    head = temp;
    
    return head;
}

bool detectLoop(Node *head) {
    Node *fast_ptr = head, *slow_ptr = head, *temp = head;
    
    while(fast_ptr != NULL && fast_ptr->next != NULL) {
        
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
        // temp = temp->next;
        
        if(fast_ptr == slow_ptr) {
            return true;
        }
    }
    
    return false;
}

int main() {
    
    Node *head = new Node(10);
    
    // head->next = head;
    
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    
    int x = 5;
    
    cout << "*************" << endl;
    printCLL(head);
    
    cout << "*************" << endl;
    cout << detectLoop(head) << endl;
    
    return 0;
}