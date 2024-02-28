#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void search(const vector<int>& nums, vector<int>& permutation, vector<bool>& chosen, vector<vector<int>>& res) {
        if (permutation.size() == nums.size()) {
            res.push_back(permutation);
            return;
        } else {
            for (int i=0; i<nums.size(); i++) {
                if (chosen[i]) continue;
                chosen[i] = true;
                permutation.push_back(nums[i]);
                search(nums, permutation, chosen, res);
                chosen[i] = false;
                permutation.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<bool> chosen(nums.size());
        vector<int> permutation;
        search(nums, permutation, chosen, res);
        return res;
    }
};