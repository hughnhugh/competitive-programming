#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void processCombinations(const vector<int>& candidates, int target, int index, int sum, vector<int>& currentSet, vector<vector<int>>& res) {
        if (sum == target) {
            res.push_back(currentSet);
            return;
        }
        
        for (int i = index; i < candidates.size(); i++) {
            // Skip duplicates
            if (i > index && candidates[i] == candidates[i-1]) continue;
            
            if (sum + candidates[i] <= target) {
                currentSet.push_back(candidates[i]);
                // Recur with the next index to not reuse the same element
                processCombinations(candidates, target, i + 1, sum + candidates[i], currentSet, res);
                currentSet.pop_back();
            } else {
                // Early stopping condition if the sum exceeds the target
                break;
            }
        }
    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> currentSet;
        processCombinations(candidates, target, 0, 0, currentSet, res);

        return res;
    }
};