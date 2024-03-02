#include <vector>
#include <unordered_map>

class Solution {
public:
    int waysToClimb(int n, std::unordered_map<int, int>& memo) {
        if (n <= 1) return 1;

        if (memo.find(n) == memo.end()) memo[n] = waysToClimb(n-1, memo) + waysToClimb(n-2, memo);
        
        return memo[n];
    }

    int climbStairs(int n) {
        std::unordered_map<int, int> memo;

        return waysToClimb(n, memo);
    }
};