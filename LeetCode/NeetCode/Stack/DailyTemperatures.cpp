#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> days(temperatures.size());
        stack<int> index;

        for (int i=0; i<temperatures.size(); i++) {
            while (!index.empty()) {
                int topIndex = index.top();

                if (temperatures[topIndex] < temperatures[i]) {
                    days[topIndex] = i-topIndex;
                    index.pop();
                } else {
                    break;
                }
            }
            index.push(i);
        }

        return days;
    }
};