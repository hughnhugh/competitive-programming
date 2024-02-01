#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> strMap;
        for (int i=0; i<strs.size(); ++i) {
            string word = strs[i];
            sort(word.begin(), word.end());
            strMap[word].push_back(strs[i]);
        }

        vector<vector<string>> res;

        for (auto it = strMap.begin(); it != strMap.end(); ++it) {
            res.push_back(it->second);
        }

        return res;
    }
};