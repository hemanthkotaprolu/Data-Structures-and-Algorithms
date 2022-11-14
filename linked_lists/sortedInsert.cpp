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

Node *sortedInsert(Node *head, int x) {
    Node *temp = new Node(x), *curr = head;
    
    if(head == NULL) {
        return temp;
    }
    
    if(x >= curr->data) {
        while(curr->next != NULL) {
            if(curr->next->data < x) {
                curr = curr->next;
            } else {
                break;
            }
        }
        
        temp->next = curr->next;
        curr->next = temp;
    } else {
        temp->next = head;
        head = temp;
    }
    
    
    return head;
}

int main() {
    
    Node *head = new Node(10);
    
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    int x = 25;
    
    cout << "**********" << endl;
    printList(head);
    
    cout << "**********" << endl;
    head = sortedInsert(head, x);
    printList(head);
    
    return 0;
}