#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    map<int, int, greater<int>> nums;
    for (int i=0; i<n; i++) {
        int t, v;
        cin >> t >> v;

        if (t == 1) {
            nums[1 << v]++;
        } else {
            auto it = nums.lower_bound(v);
            int sum = 0;

            while (sum < v && it != nums.end()) {
                int currentPower = it->first;
                int powerCount = it->second;

                int remaining = v-sum;
                int required = min(remaining / currentPower, powerCount);
                sum += required * currentPower;
                ++it;
            }

            if (sum == v) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}