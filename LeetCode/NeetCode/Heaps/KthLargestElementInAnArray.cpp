#include <queue>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> largestHeap;
        for (int num : nums) largestHeap.push(num);
        while (largestHeap.size() > k) largestHeap.pop();
        return largestHeap.top();
    }
};