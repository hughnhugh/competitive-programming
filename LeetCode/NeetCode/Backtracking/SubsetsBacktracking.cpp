#include <vector>

using namespace std;

class Solution {
public:
    void createSubset(const vector<int>& nums, int index, vector<int>& currentSet, vector<vector<int>>& res) {
        if (index == nums.size()) {
            res.push_back(currentSet);
        } else {
            currentSet.push_back(nums[index]);
            createSubset(nums, index+1, currentSet, res);
            currentSet.pop_back();
            createSubset(nums, index+1, currentSet, res);
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> current;
        createSubset(nums, 0, current, res);
        return res;
    }
};