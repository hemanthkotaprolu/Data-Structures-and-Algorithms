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

Node *removeDuplicates( Node *head) {
    // your code goes here
    map<int, int> m;

    Node *temp = head->next, *prev = head;

    m[head->data]++;
    while(temp != NULL) {
        
        if(m[temp->data] != 0) {
            prev->next = temp->next;
            temp = temp->next;
        } else {
            m[temp->data]++;
            prev = prev->next;
            temp = temp->next;
        }
    }

    return head;
}

int main() {
    
    Node *head = new Node(10);
    head->next = new Node(10);
    head->next->next = new Node(10);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(10);
    
    // int pos;cin >> pos;
    
    cout << "************" << endl;
    printList(head);
    
    head = removeDuplicates(head);
    
    cout << "************" << endl;
    printList(head);
    
    
    
    return 0;
}