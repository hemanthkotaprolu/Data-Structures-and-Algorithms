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

int main() {
    
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    
    head->next = temp1;
    
    temp1->prev = head;
    temp1->next = temp2;
    
    temp2->prev = temp1;
    
    Node *temp = head;
    
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}