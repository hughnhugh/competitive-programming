#include <bits/stdc++.h>
using namespace std;

class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string res = strs[0];
        for (int i=1; i<strs.size(); i++) {
            res += "]>$" + strs[i];
        }
        return res;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> res;
        string currentWord = "";
        for (int i=0; i<s.length(); i++) {
            char current = s[i];
            if (current == ']' && i+2 < s.length() && s[i+1] == '>' && s[i+2] == '$') {
                res.push_back(currentWord);
                currentWord = "";
                i+=2;
            } else {
                currentWord += current;
            }
        }
        res.push_back(currentWord);
        return res;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));