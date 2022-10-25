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
    Node *temp = head;
    
    while(temp != NULL) {
        
        cout << temp->data << " ";
        
        temp = temp->next;
    }
    
    cout << endl;
}

Node *insertAtEnd(Node *head, int x) {
    Node *temp = head, *endTemp = new Node(x);
       
        if(temp == NULL) {
            head = endTemp;
        } else {
            while(temp->next != NULL) {
                temp = temp->next;
            }
            
            temp->next = endTemp;
        }
        return head;
}

int main() {
    
    Node *head = new Node(10);
    
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    // 10 -> 20 -> 30 ->NULL
    
    head = insertAtEnd(head, 40);
    
    printList(head);
    
    return 0;
}