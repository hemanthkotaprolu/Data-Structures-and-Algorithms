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

int getNthFromLast(Node *head, int n) {
    // Your code here
    Node *temp = head;
    
    int len = getListLength(head), ans = -1;
    
    if(len < n) {
        return -1;
    }
    
    for(int i = 1; i < (len-n+1); i++) {
        if(temp == NULL) return ans;
        temp = temp->next;
    }
    
    if(temp == NULL) return -1;
    
    return temp->data;
}

int main() {
    
    /*
    9 2
    1 2 3 4 5 6 7 8 9
    */
    
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(100);
    head->next->next->next = new Node(5);
    // head->next->next->next->next = new Node(5);
    // head->next->next->next->next->next = new Node(6);
    // head->next->next->next->next->next->next = new Node(7);
    // head->next->next->next->next->next->next->next = new Node(8);
    // head->next->next->next->next->next->next->next->next = new Node(9);
    
    
    // int pos;cin >> pos;
    
    // cout << "************" << endl;
    // printList(head);
    // // head = insertAtGivenPosition(head, 30,3);
    // head = deleteNthNode(head, getListLength(head)-pos+1);
    // cout << "************" << endl;
    // printList(head);
    
    cout << getNthFromLast(head, 5);
    
    return 0;
}