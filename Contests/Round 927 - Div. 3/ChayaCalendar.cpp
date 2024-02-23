#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        int currentYear = a[0];

        for (int i=1; i<n; i++) {
            currentYear = (currentYear/a[i]) * a[i] + a[i];
        }
        cout << currentYear << endl;
    }
}