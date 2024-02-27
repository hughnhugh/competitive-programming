#include <queue>
using namespace std;

class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> kthLargest;
    int capacity;
public:
    KthLargest(int k, vector<int>& nums) {
        capacity = k;
        for (int& num : nums) {
            kthLargest.push(num);
            if (kthLargest.size() > k) kthLargest.pop();
        }
    }
    
    int add(int val) {
        kthLargest.push(val);
        if (kthLargest.size() > capacity) kthLargest.pop();
        return kthLargest.top();
    }
};
