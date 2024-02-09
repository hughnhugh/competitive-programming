#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1Map;
        unordered_map<char, int> s2Map;

        for (char c:s1) s1Map[c]++;
        
        int left = 0;
        int right;

        for (right=0; right < s2.length() && right < s1.length(); right++) {
            s2Map[s2[right]]++;
        }

        if (s1Map == s2Map) return true;

        for (right=right; right < s2.length(); right++) {
            if (--s2Map[s2[left]] == 0) s2Map.erase(s2[left]);
            left++;
            s2Map[s2[right]]++;
            if (s1Map == s2Map) return true;
        }

        return false;
    }
};