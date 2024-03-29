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

        vector<int> nums(n);

        for (int i=0; i<n; i++) {
            cin >> nums[i];
        }

        if (n == 1 || n == 2) {
            cout << -1 << endl;
        } else {
            if (n % 2 == 0) {
                for (int i=0; i<n; i++) {
                    if (nums[i] == n) cout << n << " ";
                    else cout << n-nums[i] << " ";
                }
            }
            else {
                for (int i=0; i<n; i++) {
                    cout << n+1-nums[i] << " ";
                }
            }

            cout << endl;
        }
    }
}