#include <vector>
// #include <utility>

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        int prev = 2;
        int secPrev = 1;
        int res;

        for (int i=3; i<=n; i++) {
            res = prev + secPrev;
            secPrev = prev;
            prev = res;
        }

        return res;
    }
};