/**
 * @file deleteFirstNode.cpp
 * @author Kotaprolu Hemanth (kotaproluhemanth@gmail.com)
 * @brief Given head pointer to the linked list delete the first node of the linked list.
 * @version 0.1
 * @date 2022-10-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */


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

Node *insertAtBegin(Node *head, int x) {
    Node *temp = new Node(x);
    
    temp->next = head;
    
    head = temp;
    
    return temp;
}

Node *deleteFirstNode(Node *head) {
    if(head == NULL) {
        return head;
    }
    
    Node *temp = head->next;
    
    delete head;
    
    return temp;
}

int main() {
    
    Node *head = new Node(10);
    
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    head = insertAtBegin(head, 5);
    
    cout << "----------------Before Deleting----------------" << endl;
    printList(head);
    
    cout << "----------------After Deleting----------------" << endl;
    head = deleteFirstNode(head);
    printList(head);
    
    return 0;
}