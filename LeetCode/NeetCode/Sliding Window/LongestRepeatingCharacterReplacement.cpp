#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        if (s.length() == 0) return 0;
        unordered_map<char, int> cMap;

        int left = 0;
        int right = 0;
        int longest = 0;
        int maxFrequency = 0;
        
        for(right = 0; right <s.length(); right++) {
            maxFrequency = max(maxFrequency, ++cMap[s[right]]);

            if ((right-left+1) - maxFrequency <= k) {
                longest = max(longest,right-left+1);
            } else {
                cMap[s[left++]]--;
            }
        }

        return longest;
    }
};