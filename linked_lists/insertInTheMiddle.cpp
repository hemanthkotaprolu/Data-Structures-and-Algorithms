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

int getListLength(Node *head) {
    int ans = 0;
    
    Node *curr = head;
    
    while(curr != NULL) {
        ans++;
        curr = curr->next;
    }
    
    return ans;
}



int main() {
    
    Node *head = new Node(10);
    
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    head = insertInMiddle(head, 25);
    
    printList(head);
    
    return 0;
}