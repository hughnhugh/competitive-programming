#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);

        left[0] = nums[0];
        right[n-1] = nums[n-1];

        for (int i=1; i<n; ++i) {
            left[i] = left[i-1] * nums[i];
            right[n-1-i] = right[n-i] * nums[n-1-i];
        }

        vector<int> res(n);

        res[0] = right[1];
        res[n-1] = left[n-2];

        for (int i=1; i<n-1; ++i) {
            res[i] = left[i-1] * right[i+1];
        }

        return res;
    }
};