#include<bits/stdc++.h>
using namespace std;

/*
    structs vs class
        For now both are almost same. But the default access modifier for struct is PUBLIC
        but for class it is PRIVATE.
*/

struct Node {
    int data;
    Node *next;
    
    Node(int x) {
        this->data = x;
        this->next = NULL;
    }
};

void printListRecursive(Node *head) {
    if(head == NULL) {
        return;
    }
    cout << head->data << " ";
    printListRecursive(head->next);
}

void printList(Node *head) {
    
    /*  Creating different node because we are working with addresses so if something changes here,
        it changes everywhere
    */
    Node *curr = head;
    
    while(curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    
    cout << endl;
}

int main() {
    
    Node *head = new Node(10);
    
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    printListRecursive(head);
    
    return 0;
}