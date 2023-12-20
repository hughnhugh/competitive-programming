#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;

    
    while (test--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        vector<long long> b(n);

        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        for (int i=0; i<n; i++) {
            cin >> b[i];
        }

        long long maxExp = 0;
        long long maxBExp = 0;
        long long runningSum = 0;
        
        for (int i=0; i<n; i++) {
            if (i >= k) break;
            maxBExp = max(maxBExp, b[i]);
            runningSum += a[i];
            maxExp = max(maxExp, runningSum+((k-i-1) * maxBExp));
        }

        cout << maxExp << "\n";
    }
}