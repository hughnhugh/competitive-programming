#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(nullptr);
    int test;
    std::cin >> test;
    
    while (test--) {
        int n; cin >> n;

        vector<int> dp(1001, 0);
        dp[0] = 0;
        for (int i = 1; i <= 1000; i++) {
            if (i >= 15) {
                dp[i] = min({dp[i - 1], dp[i - 3], dp[i - 6], dp[i-10], dp[i-15]}) + 1; 
            } else if (i >= 10) {
                dp[i] = min({dp[i - 1], dp[i - 3], dp[i - 6], dp[i-10]}) + 1; 
            } else if (i >= 6) {
                dp[i] = min({dp[i - 1], dp[i - 3], dp[i - 6]}) + 1; 
            } else if (i >= 3) {
                dp[i] = min({dp[i - 1], dp[i - 3]}) + 1; 
            } else {
                dp[i] = dp[i-1] + 1; 
            }
        }

        if (n < 900) cout << dp[n] << "\n";
        else {
            int coinsOne = (n-900)/15;
            n-=coinsOne*15;
            cout << coinsOne + dp[n] << "\n";
        }
    }
}