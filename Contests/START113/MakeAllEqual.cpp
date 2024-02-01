#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n, m;
        cin >> n >> m;

        vector<int> arr(n);

        int maxValue = 0;
        long long diffSum = 0;

        for (int i=0; i<n; i++) {
            cin >> arr[i];
            maxValue = max(arr[i], maxValue);
        }

        int maxDiff = 0;

        for (int i=0; i<n; i++) {
            diffSum += maxValue - arr[i];
            maxDiff = max(maxDiff, maxValue - arr[i]);
        }

        int operations = diffSum / m;
        if (diffSum % m > 0) operations ++;

        cout << max(maxDiff, operations) << "\n";
    }
}