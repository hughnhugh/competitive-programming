#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> eval;

        for (const string& s : tokens) {
            if (s.size() == 1 && string("+-*/").find(s[0]) != string::npos) {
                int first = eval.top(); eval.pop();
                int second = eval.top(); eval.pop();
                switch(s[0]) {
                    case '+': eval.push(second + first); break;
                    case '-': eval.push(second - first); break;
                    case '*': eval.push(second * first); break;
                    case '/': eval.push(second / first); break;
                }
            } else {
                eval.push(stoi(s));
            }
        }
        return eval.top();
    }
};