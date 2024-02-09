#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        
        int maxArea = (right - left) * min(height[left], height[right]);

        while (left < right) {
            int currentArea = (right - left) * min(height[left], height[right]);
            maxArea = max(currentArea, maxArea);
            if (height[left] > height[right]) right--;
            else left++;
        }

        return maxArea;
    }
};