#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n, m, k;
        cin >> n >> m >> k;

        set<int> a;
        set<int> b;

        for (int i=0; i<n; i++) {
            int current;
            cin >> current;

            a.insert(current);
        }

        for (int i=0; i<m; i++) {
            int current;
            cin >> current;

            b.insert(current);
        }

        int aCount = 0;
        int bCount = 0;
        int aOrBCount = 0;
        bool notPossible = false;

        for (int i=1; i<=k; i++) {
            if (a.find(i) != a.end() && b.find(i) != b.end()) {
                aOrBCount++;
            } else if (a.find(i) != a.end()) {
                aCount++;
            } else if (b.find(i) != b.end()) {
                bCount++;
            } else {
                notPossible = true;
                break;
            }
        }

        if (notPossible) cout << "NO" << endl;
        else {
            if (aCount <= k/2 && bCount <= k/2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}