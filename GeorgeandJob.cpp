#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(n);
    vector<long long> prefix(n+1, 0);

    for (int i=0; i<n; i++) {
        cin >> arr[i];
        prefix[i+1] = prefix[i] + arr[i];
    }

    vector<int> sums;

    long long maxSum = 0;

    if (m > 1) {
        for (int i=0; i<n-(m-1); i++) {
            sums.push_back(prefix[i+m] - prefix[i]);
        }
        sort(sums.begin(), sums.end(), ::greater<int>());

        for (int i=0; i<k; i++) {
            maxSum += sums[i];
        }
        cout << maxSum;
    } else {
        sort(arr.begin(), arr.end(), ::greater<int>());
        for (int i=0; i<k; i++) {
            maxSum += arr[i];
        }
        cout << maxSum;
    }

}