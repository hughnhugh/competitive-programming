#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;

        int maxProfit = 0;

        while (sell < prices.size()) {
            int profit = prices[sell] - prices[buy];
            if (prices[sell] < prices[buy]) buy = sell;
            sell++;

            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};