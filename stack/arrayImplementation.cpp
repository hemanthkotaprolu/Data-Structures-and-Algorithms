#include<bits/stdc++.h>
using namespace std;


struct MyStack {
    int *arr;
    int cap;
    int top;
    
    MyStack(int c) {
        this->cap = c;
        arr = new int[this->cap];
        top = -1;
    }
    
    void push(int x) {
        if(this->top >= this->cap) {
            cout << "Overflow" << endl;
            return;
        }
        
        top++;
        arr[top] = x; 
    }
    
    int pop() {
        
        if(isEmpty()) {
            // cout << "Empty stack" << endl;;
            return INT_MAX;
        }
        
        int res = arr[top];
        top--;
        
        return res;
    }
    
    int peek() {
        if(isEmpty()) {
            // cout << "Empty stack" << endl;
            return INT_MAX;
        }
        return arr[top];
    }
    
    int size() {
        return (top+1);
    }
    
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    
    MyStack s(5);
    
    cout << s.pop() << endl;
    
    
    s.push(5);
    s.push(10);
    s.push(20);
    
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    
    return 0;
}