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

        int zeros = 0;
        int ones = 0;

        for (int i=0; i<n; i++) {
            int current;
            cin >> current;

            if (current == 0) zeros++;
            else ones++;
        }

        cout << min(zeros, ones) << "\n";
    }
}