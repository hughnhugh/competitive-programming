#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> res_set; // Using a set to avoid duplicates
        vector<vector<int>> res; // This will be the returned vector

        if (nums.size() < 3) return {}; // Return empty vector if less than 3 nums

        for (int i = 0; i < nums.size() - 2; i++) { // Only go up to nums.size() - 2 to leave space for left and right
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates

            int left = i + 1;
            int right = nums.size() - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    res_set.insert({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++; // Skip duplicates for left
                    while (left < right && nums[right] == nums[right - 1]) right--; // Skip duplicates for right
                    left++;
                    right--;
                } else if (sum > 0) {
                    right--;
                } else {
                    left++;
                }
            }
        }

        // Convert set to vector
        for (auto& triplet : res_set) {
            res.push_back(triplet);
        }

        return res;
    }
};