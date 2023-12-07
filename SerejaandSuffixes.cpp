#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    set<int> distinct;
    vector<int> arr(n);
    vector<int> dp(n);

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i=n-1; i>=0; i--) {
        distinct.insert(arr[i]);
        dp[i] = distinct.size();
    }

    for (int i=0; i<m; i++) {
        int l;
        cin >> l;

        cout << dp[l-1] << "\n";
    }
}