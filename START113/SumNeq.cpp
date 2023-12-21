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

        vector<int> arr(n);

        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }

        if (n==4) {
            if (arr[0] + arr[1] == arr[2] + arr[3]) {
                cout << "NO" << "\n";
            } else {
                cout << "YES" << "\n";
            }
        } else {
            bool yes = false;

            int prev = arr[0];

            for (int i=1; i<n; i++) {
                if (prev != arr[i]) {
                    yes = true;
                    break;
                }
            }

            if (yes) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
}