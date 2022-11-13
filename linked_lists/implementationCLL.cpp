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
    
    
    while(temp->next != head) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    cout << temp->data << endl;
}

int main() {
    
    Node *head = new Node(10);
    head->next = head;
    
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = head;
    
    printCLL(head);
    
    return 0;
}