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

        int ones = 0;

        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i] == 1) ones++;
        }

        int left = 0;

        int first = -1;
        int last = -1;

        for (int i=0; i<n; i++) {
            if (a[i] == 1) {
                first = i;
                break;
            }
        }

        for (int i=n-1; i>=0; i--) {
            if (a[i] == 1) {
                last = i;
                break;
            }
        }

        int moveCount = 0;

        while (last > first+ones-1) {
            if (a[last] == 1) {
                for (int i=last-1; i>=first; i--) {
                    if (a[i] == 0) {
                        a[i] = 1;
                        a[last] = 0;
                        break;
                    }
                }
                moveCount++;
            }
            last--;
        }

        cout << moveCount << endl;
    }
}