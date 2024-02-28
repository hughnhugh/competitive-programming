#include <vector>

using namespace std;

class Solution {
public:
    void createSubset(const vector<int>& nums, int index, vector<int>& currentSet, vector<vector<int>>& res) {
        vector<int> includeCurrent(currentSet);
        vector<int> excludeCurrent(currentSet);
        includeCurrent.push_back(nums[index]);
        if (index == nums.size()-1) {
            res.push_back(currentSet);
            res.push_back(includeCurrent);
        } else {
            createSubset(nums, index+1, includeCurrent, res);
            createSubset(nums, index+1, excludeCurrent, res);
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> current;
        createSubset(nums, 0, current, res);
        return res;
    }
};