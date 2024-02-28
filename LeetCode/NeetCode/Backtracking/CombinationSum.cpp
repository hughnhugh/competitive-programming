#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void backtracking(const vector<int>& candidates, const int& target, const int& current, const int& index, vector<int>& currentSet, vector<vector<int>>& res) {
        if (current == target) {
            res.push_back(currentSet);
            return;
        } else {
            for (int i = index; i < candidates.size(); ++i) {
                if (current + candidates[i] > target) break; // No need to continue if the sum exceeds the target
                
                currentSet.push_back(candidates[i]);
                backtracking(candidates, target, current + candidates[i], i, currentSet, res); // Allow the same element to be reused
                currentSet.pop_back(); // Backtrack
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> currentSet;
        backtracking(candidates, target, 0, 0, currentSet, res);

        return res;
    }
};