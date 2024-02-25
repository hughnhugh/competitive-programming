#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        vector<int> pref(n+1, 0); // Correct initialization
        for (int i=1; i<=n; i++) { // Correct prefix sum calculation
            pref[i] = pref[i-1] + a[i-1];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;

            int sum = pref[r] - pref[l-1];

            if (r == l) cout << "NO" << endl;
            else if ((r-l+1) % 2 == 1 && sum >= (r-l+1) / 2 + 2*((r-l+1)-((r-l+1) / 2))+1) cout << "YES" << endl;
            else if (sum >= 2 * (r-l+1) / 2 + (r-l+1)-((r-l+1) / 2)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}