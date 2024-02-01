#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsMap;

        vector<int> res(2);

        for (int i=0; i<nums.size(); ++i) {
            int diff = target - nums[i];
            if (numsMap.count(diff) == 1) {
                res[0] = numsMap[diff];
                res[1] = i;
                break;
            }
            numsMap[nums[i]] = i;
        }

        return res;
    }
};