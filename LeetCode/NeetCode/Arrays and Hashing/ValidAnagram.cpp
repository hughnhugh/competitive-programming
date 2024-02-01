#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        if (s.length() != t.length()) return false;

        for (char c : s) {
            sMap[c]++;
        }

        for (char c : t) {
            tMap[c]++;
        }

        for (auto it = sMap.begin(); it != sMap.end(); ++it) {
            char c = it -> first;
            if (sMap[c] != tMap[c]) return false;
        }

        return true;
    }
};