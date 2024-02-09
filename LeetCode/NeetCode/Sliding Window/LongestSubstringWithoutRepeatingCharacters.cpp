#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) return 0;
        unordered_set<char> chars;
        int left = 0;
        int right = 0;
        chars.insert(s[right++]);

        int longest = 1;

        while (right < s.length()) {
            char current = s[right];
            while (chars.find(current) != chars.end()) {
                chars.erase(s[left++]);
            }
            
            chars.insert(s[right++]);
            longest = max(longest, (int)chars.size());
        }

        return longest;
    }
};