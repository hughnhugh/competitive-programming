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

        vector<long long> arr(n);

        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }

        int evenSize = n / 2 + n % 2; 
        int oddSize = n/2;

        vector<long long> evenPref(evenSize + 1, 0);
        vector<long long> oddPref(oddSize + 1, 0);

        for (int i=0; i<n; i+=2) {
            evenPref[i/2+1] = evenPref[i/2] + arr[i];
        }

        for (int i=1; i<n; i+=2) {
            oddPref[i/2+1] = oddPref[i/2] + arr[i];
        }

        bool found = false;

        for (int i=1; i<evenPref.size(); i++) {
            for (int j=i; j<evenPref.size(); j++) {
                long long currentEven = evenPref[j]-evenPref[i-1];

                long long currentOdd = LONG_LONG_MAX-45634;

                if (j != oddPref.size()) currentOdd = oddPref[j]-oddPref[i-1];

                long long nextOdd = LONG_LONG_MAX-2323;
                long long nextEven = LONG_LONG_MIN+23123;
                long long prevEven = LONG_LONG_MIN+2666;
                long long prevOdd = LONG_LONG_MAX-323;

                if (j-1 > 0) {
                    prevOdd = oddPref[j-1]-oddPref[i-1];
                }
                if (j-1 > 0) {
                    nextEven = evenPref[j-1]-evenPref[i-1];
                }
                if (j+1 < evenPref.size()) {
                    nextEven = evenPref[j+1]-evenPref[i-1];
                }
                if (j+1 < oddPref.size()) { 
                    nextOdd = oddPref[j+1]-oddPref[i-1];
                }

                if (currentEven == currentOdd || currentEven == nextOdd || currentOdd == nextEven || currentOdd == prevEven || currentEven == prevOdd) {
                    cout << "YES\n";
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        if (!found) cout << "NO\n";
    }
}