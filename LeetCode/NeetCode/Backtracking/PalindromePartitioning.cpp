#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(const string& s) {
        int left = 0, right = s.length()-1;
        while (left < right) {
            if (s[left++] != s[right--]) return false;
        }
        return true;
    }

    void createPartitions(const string& s, const int& index, vector<string>& currentPartition, vector<vector<string>>& res) {
        if (index == s.length()) {
            res.push_back(currentPartition);
            return;
        } else {
            for (int i=index; i<s.length(); i++) {
                string potentialPartition = s.substr(index, i-index+1);
                if (isPalindrome(potentialPartition)) {
                    currentPartition.push_back(potentialPartition);
                    createPartitions(s, i+1, currentPartition, res);
                    currentPartition.pop_back();
                }
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> currentPartition;

        createPartitions(s, 0, currentPartition, res);

        return res;
    }
};