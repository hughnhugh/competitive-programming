#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void generateParen(const int& open, const int& closed, vector<string>& result, const string& s) {
        if (open == 0 && closed == 0) {
            result.push_back(s);
            return;
        }
        if (open > 0) {
            generateParen(open-1, closed, result, s+"(");
        }
        if (closed > 0 && open < closed) {
            generateParen(open, closed-1, result, s+")");
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;

        generateParen(n, n, res, "");

        return res;
    }
};