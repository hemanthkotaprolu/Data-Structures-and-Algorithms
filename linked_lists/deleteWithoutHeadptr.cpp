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

void deleteNode(Node *del) {
    Node *nxt = del->next;
    
    
    while(nxt->next != NULL) {
        int temp = del->data;
        del->data = nxt->data;
        nxt->data = temp;
        
        del = del->next;
        nxt = nxt->next;
    }
    
    int temp = del->data;
    del->data = nxt->data;
    nxt->data = temp;
    
    del->next = NULL;
    delete nxt;
    del = NULL;
}

int main() {
    
    Node *head = new Node(1);
    
    head->next = new Node(2);
    // head->next->next = new Node(4);
    // head->next->next->next = new Node(30);
    
    Node *del = head;
    
    deleteNode(del);
    
    printList(head);
    
    return 0;
}