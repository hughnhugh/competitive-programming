#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;

        while (left < right) {
            int mid = left + (right-left) / 2;

            if (nums[mid] > nums[right]) {
                // The minimum value is in the right half
                left = mid + 1;
            } else {
                // The minimum value is in the left half, including mid
                right = mid;
            }
        }
        return nums[left];
    }
};
