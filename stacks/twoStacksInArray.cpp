#include<bits/stdc++.h>
using namespace std;

class TwoStacks {
    int *arr;
    int cap, pos1, pos2;
    
    public:
        TwoStacks(int n) {
            arr = new int[n];
            cap = n;
            pos1 = -1;
            pos2 = n;
        }
        
        void push1(int x) {
            if(pos1+1 == pos2) {
                cout << "Stack 1 is full" << endl;
                return;
            }
            
            arr[pos1+1] = x;
            pos1++;
        }
        
        void push2(int x) {
            if(pos2-1 == pos1) {
                cout << "Stack 2 is full" << endl;
                return;
            }
            
            arr[pos2-1] = x;
            pos2--;
        }
        
        int pop1() {
            if(pos1 == -1) {
                cout << " No element in the stack 1" << endl;
                return -1;
            }
            
            int temp = arr[pos1];
            pos1--;
            
            return temp;
        }
        
        int pop2() {
            if(pos2 == cap) {
                cout << "No element in the stack 2" << endl;
                return -1;
            }
            
            int temp = arr[pos2];
            pos2++;
            
            return temp;
        }
        
        int size1() {
            return pos1==-1 ? 0 : pos1+1;
        }
        
        int size2() {
            return pos2==cap ? 0 : cap-pos2;
        }
};

int main() {
    
    TwoStacks arr(5);
    
    cout << arr.pop1() << " " << arr.pop2() << endl;
    
    arr.push1(1);
    arr.push2(10);
    
    cout << arr.size1() << " " << arr.size2() << endl;
    cout << arr.pop1() << " " << arr.pop2() << endl;
    
    arr.push1(2);
    arr.push2(20);
    
    cout << arr.size1() << " " << arr.size2() << endl;
    cout << arr.pop1() << " " << arr.pop2() << endl;
    
    arr.push1(3);
    arr.push2(30);
    
    cout << arr.size1() << " " << arr.size2() << endl;
    cout << arr.pop1() << " " << arr.pop2() << endl;
    
    arr.push1(4);
    
    return 0;
}