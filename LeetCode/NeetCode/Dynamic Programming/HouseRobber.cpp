#include <vector>

class Solution {
public:
    int rob(std::vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0;
        if (n == 1) return nums[0];

        std::vector<int> maxMoney(n, 0);

        maxMoney[0] = nums[0];
        maxMoney[1] = std::max(nums[1], nums[0]);
        
        for (int i=2; i<n; i++) {
            maxMoney[i] = std::max(maxMoney[i-2] + nums[i], maxMoney[i-1]);
        }

        return maxMoney[n-1];
    }
};