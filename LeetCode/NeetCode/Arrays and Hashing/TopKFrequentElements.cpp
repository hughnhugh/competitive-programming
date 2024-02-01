#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> numsMap;

        for (int num : nums) {
            numsMap[num]++;
        }

        int count = 0;

        vector<pair<int, int>> pairsMap;

        for (auto it = numsMap.begin(); it != numsMap.end(); ++it) {
            pairsMap.push_back(make_pair(it->second, it->first));
        }

        sort(pairsMap.begin(), pairsMap.end());

        vector<int> res;

        for (auto it = pairsMap.rbegin(); it != pairsMap.rend(); ++it) {
            count++;

            res.push_back(it->second);

            if (count == k) break;
        }

        return res;
    }
};