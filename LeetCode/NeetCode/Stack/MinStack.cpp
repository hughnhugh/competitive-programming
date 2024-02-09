#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    stack<int> eleStack;
    stack<int> minStack;
public:
    MinStack() {

    }
    
    void push(int val) {
        this->eleStack.push(val);
        if (!minStack.empty()) this->minStack.push(min(val, minStack.top()));
        else this->minStack.push(val);
    }
    
    void pop() {
        this->minStack.pop();
        this->eleStack.pop();
    }
    
    int top() {
        return this->eleStack.top();
    }
    
    int getMin() {
        return this->minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */