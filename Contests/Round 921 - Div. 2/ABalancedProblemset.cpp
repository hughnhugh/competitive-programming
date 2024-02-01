#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        int x, n;
        cin >> x >> n;

        int largest = x / n + 1;

        while (largest--) {
            int remainder = x - (largest * n);
            if (remainder % largest == 0) break;
        }

        cout << largest << endl;
    }
}