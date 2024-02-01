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

        if (n == 1) {
            if (arr[0] >= 2) cout << "Alice\n";
            else cout << "Bob\n";
        } else {
            int odd = 0;
            int even = 0;

            for (int i=0; i<n; i++) {
                if (i % 2 == 0) even += arr[i]; 
                else odd += arr[i];
            }

            int total = odd + even;
            
            if (odd&1 && even&1) {
                if (total % 4 == 0) cout << "Alice\n";
                else cout << "Bob\n";
            } else if ((odd&1)==0 && (even&1)==0) {
                if (total % 4 == 0) cout << "Bob\n";
                else cout << "Alice\n";
            }
            else {
                cout << "Bob\n";
            }
        }
    }
}