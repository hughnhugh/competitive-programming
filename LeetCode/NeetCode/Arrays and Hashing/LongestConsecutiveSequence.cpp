#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty input

        set<int> orderedNum;

        for (int num : nums) {
            orderedNum.insert(num);
        }

        int count = 1;
        int maxCount = 1;
        int prev = *orderedNum.begin();

        for (auto it = next(orderedNum.begin()); it != orderedNum.end(); ++it) {
            if (prev == *it - 1) {
                count++;
            } else {
                count = 1;
            }

            prev = *it;
            maxCount = max(count, maxCount);
        }

        return maxCount;
    }
};