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

int getListLength(Node* head) {
    int ans = 0;
    
    Node* temp = head;
    
    while(temp != NULL) {
        temp = temp->next;
        ans++;
    }
    
    return ans;
}

Node* insertAtGivenPosition(Node* head, int data, int pos) {
    // create the Node object
    Node* temp = new Node(data);
    
    Node *prev = NULL, *nxt = head;
    
    if(pos == 1) {
        temp->next = nxt;
        head = temp;
        temp = NULL;
        delete temp;
        
        return head;
    }
    
    for(int i = 1; i < pos; i++) {
        
        if(nxt == NULL && i+1 != pos) {
            return head;
        }
        if(prev == NULL) { 
            prev = head;
        }
        else {
            prev = prev->next;
        }
        
        nxt = nxt->next;
    }
    prev->next = temp;
    temp->next = nxt;
    
    prev = NULL;delete prev;
    nxt = NULL; delete nxt;
    // cout << prev->data << " " << nxt->data << endl;
    
    return head;
}

Node* deleteNthNode(Node* head, int pos) {
    Node *prev = NULL,*nxt = head;
    
    if(pos == 1) {
        return head->next;
    }
    
    for(int i = 1; i < pos; i++) {
        
        if(prev == NULL) {
            prev = head;
        } else {
            prev = prev->next;
        }

        nxt = nxt->next;
    }
    
    prev->next = nxt->next;
    nxt->next = NULL;
    delete nxt;
    
    return head;
}

void removeNodeWithGivenPtr(Node *ptr) {
    Node *temp = ptr->next, *prev = ptr;
    
    while(temp->next != NULL) {
        
        int d = temp->data;
        temp->data = prev->data;
        prev->data = d;
        
        temp = temp->next;
        prev = prev->next;
    }
    
    int d = temp->data;
    temp->data = prev->data;
    prev->data = d;
    
    prev->next = NULL;
}

void removeNodeWithGivenPtrModified(Node *ptr) {
    Node *temp = ptr->next;
    
    ptr->data = temp->data;
    ptr->next = ptr->next->next;
    
    delete(temp);
}

int main() {
    
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    
    
    
    cout << "************" << endl;
    printList(head);
    
    
    cout << "************" << endl;
    
    removeNodeWithGivenPtrModified(head->next);
    printList(head);
    
    return 0;
}