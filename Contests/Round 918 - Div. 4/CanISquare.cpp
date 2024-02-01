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

        long long sum = 0;

        for (int i=0; i<n; i++) {
            long long current;
            cin >> current;
            sum += current;
        }

        if (abs((long long)sqrt(sum)*(long long)sqrt(sum) - sum) < 0.00000000001) cout << "YES\n";
        else cout << "NO\n";
    }
}