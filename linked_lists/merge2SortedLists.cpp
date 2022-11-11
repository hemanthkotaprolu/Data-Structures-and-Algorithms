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

Node *mergeTwoLists(Node *list1, Node *list2) {
    Node *ans = NULL, *temp1 = list1, *temp2 = list2, *temp3 = NULL;
    
    if(temp1 == NULL && temp2 == NULL) {
        return NULL;
    } else if(temp1 == NULL && temp2 != NULL) {
        return temp2;
    } else if(temp1 != NULL && temp2 == NULL) {
        return temp1;
    }
    
    if(temp1->data <= temp2->data) {
        ans = new Node(temp1->data);
        temp1 = temp1->next;
    } else {
        ans = new Node(temp2->data);
        temp2 = temp2->next;
    }
    
    temp3 = ans;
    
    while(temp1 != NULL && temp2 != NULL) {
        if(temp1->data <= temp2->data) {
            temp3->next = new Node(temp1->data);
            temp1 = temp1->next;
        } else {
            temp3->next = new Node(temp2->data);
            temp2 = temp2->next;
        }
        
        temp3 = temp3->next;
    }
    
    while(temp2 != NULL) {
        temp3->next = new Node(temp2->data);
        
        temp3 = temp3->next;
        temp2 = temp2->next;
    }
    
    while(temp1 != NULL) {
        temp3->next = new Node(temp1->data);
        
        temp3 = temp3->next;
        temp1 = temp1->next;
    }
    
    temp3 = NULL;
    delete temp3;
    
    return ans;
}

int main() {
    
    // Node *head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(40);
    // head->next->next->next = new Node(40);
    // head->next->next->next->next = new Node(50);
    
    // Node *head2 = new Node(10);
    // head2->next = new Node(30);
    // head2->next->next = new Node(40);
    // head2->next->next->next = new Node(40);
    // head2->next->next->next->next = new Node(50);
    
    Node *head = NULL, *head2 = new Node(1);
    
    Node *headSorted = mergeTwoLists(head, head2);
    
    cout << "**********" << endl;
    cout << "List 1: ";
    printList(head);
    cout << "List 2: ";
    printList(head2);
    cout << "**********" << endl;
    cout << "Merged Sorted List: ";
    printList(headSorted);
    
    
    return 0;
}