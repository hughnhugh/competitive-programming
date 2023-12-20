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

        for (int i=0; i<k; i++) {
            cout << i+1 << " ";
        }

        for (int i=n; i>k; i--) {
            cout << i << " ";
        }

        cout << "\n";
    }
}