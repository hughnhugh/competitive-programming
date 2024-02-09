#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isOpen(const char& c) {
        if (c == '(' || c == '{' || c == '['){
            return true;
        } 
        return false;
    }

    bool bracketsMatch(const char& open, const char& closed) {
        return ((open == '(' && closed == ')') || (open == '[' && closed == ']') || (open == '{' && closed == '}'));
    }

    bool isValid(string s) {
        stack<char> bracketsStack;
        
        for (const char& c:s) {
            char top;

            if (!isOpen(c)) {
                if (bracketsStack.empty()) {
                    return false;
                } else {
                    char top = bracketsStack.top();
                    bracketsStack.pop();
                    if (!bracketsMatch(top, c)) return false;
                }
            } else {
                bracketsStack.push(c);
            }
        }

        if (bracketsStack.empty()) return true;
        return false;
    }
};