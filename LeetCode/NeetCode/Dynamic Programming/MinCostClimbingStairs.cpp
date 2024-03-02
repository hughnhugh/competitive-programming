#include <vector>

class Solution {
public:
    int minCostClimbingStairs(std::vector<int>& cost) {
        if (cost.size() == 2) return std::min(cost[0], cost[1]);

        std::vector<int> minCost(cost.size()+1, 0);

        for (int i=2; i<=cost.size(); i++) {
            minCost[i] = std::min(minCost[i-1]+cost[i-1], minCost[i-2]+cost[i-2]);
        }

        return minCost[cost.size()];
    }
};