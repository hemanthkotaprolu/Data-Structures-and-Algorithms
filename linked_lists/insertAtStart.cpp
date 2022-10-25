/**
 * @file insertAtStart.cpp
 * @author Kotaprolu Hemanth (kotaproluhemanth@gmail.com)
 * @brief Given a value and a head pointer of the list. insert the given value at the start.
 * @version 0.1
 * @date 2022-10-24
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

int main() {
    
    Node *head = new Node(10);
    
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    cout << head->data << endl;
    
    head = insertAtBegin(NULL, 5);
    
    printList(head);
    
    return 0;
}