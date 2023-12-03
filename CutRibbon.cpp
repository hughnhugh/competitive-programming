#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int lengths[3] = {a, b, c};
    sort(lengths, lengths + 3);

    vector<int> dp(n + 1, INT_MIN);
    dp[0] = 0;

    for (int i=1; i<=n; i++) {
        for (int j=0; j<3; j++) {
            int length = lengths[j];
            if (i - length < 0) continue;
            dp[i] = max(dp[i-length] + 1, dp[i]);
        }
    }

    cout << dp[n];

    return 0;
}