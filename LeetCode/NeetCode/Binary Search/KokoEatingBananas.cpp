#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int left = 1;
        int right = piles[piles.size()-1];

        while (left <= right) {
            int k = left + (right-left) / 2;
            long long time = 0;
            for (int pile : piles) {
                time += (pile + k - 1) / k; // Add k - 1 before dividing to round up
            }

            if (time > h) left = k + 1;
            else right = k - 1;
        }

        return left;
    }
};