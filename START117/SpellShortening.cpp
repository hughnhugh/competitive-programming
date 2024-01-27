#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int n;
        string s;

        cin >> n >> s;

        int prev = s[0];

        int remove = -1;

        for (int i=1; i<n; i++) {
            int current = s[i];
            if (prev > current) {
                remove = i-1;
                break;
            }
            prev = current;
        }

        if (remove == -1) remove = n-1;

        for (int i=0; i<n; i++) {
            if (i != remove) cout << s[i];
        }

        cout << endl;
    }
}