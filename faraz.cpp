#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(!s2.empty()){
            int t1 = s2.top();
            s2.pop();
            return t1;
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            int t2 = s2.top();
            s2.pop();
            return t2;
        }
    }
    
    int peek() {
        if(!s2.empty()){
            return s2.top();
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            
            return s2.top();
        }
    }
    
    bool empty() {
        return s1.empty() and s2.empty();
    }
};