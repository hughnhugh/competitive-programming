#include <vector>

class Solution {
public:
    int rob(std::vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return std::max(nums[1], nums[0]);

        std::vector<int> maxMoney(n-1, 0);

        maxMoney[0] = nums[0];
        maxMoney[1] = std::max(nums[1], nums[0]);
        
        for (int i=2; i<n-1; i++) {
            maxMoney[i] = std::max(maxMoney[i-2] + nums[i], maxMoney[i-1]);
        }

        std::vector<int> maxMoneyTwo(n-1, 0);
        maxMoneyTwo[0] = nums[1];
        maxMoneyTwo[1] = std::max(nums[2], nums[1]);

        for (int i=2; i<n-1; i++) {
            maxMoneyTwo[i] = std::max(maxMoneyTwo[i-2] + nums[i+1], maxMoneyTwo[i-1]);
        }

        return std::max(maxMoney[n-2], maxMoneyTwo[n-2]);
    }
};